#include "integer.h"
#include <iostream>

using namespace std;

Integer::Integer() {                           // standard constructor
    cout << "Integer()" << endl;
    m_pInt = new int(0);
}

Integer::Integer(int value) {                  // paramterizied constructor
    cout << "Integer(int)" << endl;
    m_pInt = new int(value);
}

Integer::Integer(const Integer & obj) {        // copy constructor
    cout << "Integer(const Integer&)" << endl;
    m_pInt = new int(*obj.m_pInt);
}

Integer::Integer(Integer && obj) {             // move constructor  
    cout << "Integer(int&&)" << endl;
    m_pInt = obj.m_pInt;
    obj.m_pInt = nullptr;
}

Integer::~Integer() {                        // destructor
    cout << "~Integer()" << endl;
    delete m_pInt;
}

  int Integer::GetValue() const {
    return *m_pInt;
  }

  void Integer::SetValue(int value) {
    *m_pInt = value;
  }

Integer & Integer::operator++() { // ++a means a.operator++()
    cout << "operator++()" << endl;
    ++(*m_pInt);
    return *this;  // the value a the address of this
}

Integer Integer::operator++(int) { // a++ means a.operator++(int)
    cout << "operator++(int)" << endl;
    Integer temp(*this);
    ++(*m_pInt);
    return temp;
}

bool Integer::operator==(const Integer & a) const { // c==a means c.operator==(a)
    cout << "operator==(const Integer &) const" << endl;
    return *m_pInt == *a.m_pInt;
}

Integer & Integer::operator=(const Integer & a) { // c=a means c.operator=(a)
    cout << "operator=(const Integer &) const" << endl;
    if (this != &a) {            // check for self assignemnt
    delete m_pInt;
    m_pInt = new int(*a.m_pInt);
    }
    return *this;
}

Integer & Integer::operator=(Integer && a) { // c=&&a means c.operator=(&&a)
    cout << "operator=(Integer &&) const" << endl;
    if (this != &a) {
    delete m_pInt;
    m_pInt = a.m_pInt;
    a.m_pInt = nullptr;
    }
    return *this;
}

Integer Integer::operator+(const Integer & a) const { // c+a means c.operator+(a)
    cout << "operator+(const Integer &) const" << endl;
    Integer temp;
    *temp.m_pInt = *m_pInt + *a.m_pInt; // *this->m_pInt
    return temp;
}

void Integer::operator()() {
    // cout << "operator()()" << endl;
    cout << *m_pInt << endl; 
}

Integer operator +(int x, const Integer &y) {
    // cout << "operator+(int, const Integer)" << endl;
    Integer temp;
    temp.SetValue(x + y.GetValue());
    return temp;
}
ostream & operator <<(ostream & out, const Integer &a) {
    // cout << "operator <<(ostream &, const Integer &)" << endl;
    out << a.GetValue();
    return out;
}
istream & operator >> (istream &input, Integer &a) {
    // cout << "operator >>(istream &, Integer &)" << endl;
    int x;
    input >> x;
    // a.SetValue(x);  // SetValue() allows copy by value, no friend required
    *a.m_pInt = x;     // access to private member of Integer Class.    
    return input;
}
