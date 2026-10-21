#include <iostream>
class Integer {
    int *m_pInt;
public:
    Integer();                                  // Default constructor
    Integer(int value);                         // Parameterized constructor
    Integer(const Integer &obj);                // Copy constructor
    Integer(Integer &&obj);                     // Move constructor
    int GetValue()const;
    void SetValue(int value);
    ~Integer();
    Integer & operator ++();                    // pre-increment operator
    Integer operator ++(int);                   // post-increment operator
    bool operator ==(const Integer &a)const;    // comparison
    Integer & operator =(const Integer &a);     // Copy assignment
    Integer & operator =(Integer &&a);          // Move assignment
    Integer operator +(const Integer & a)const; // + operator

    void operator ()();                         // Function Call Operator
    operator int();                             // Type Conversion Operator

    // operator >> is decalred as friend of Integer Class
    friend std::istream & operator >> (std::istream &input, Integer &a);
};
Integer operator +(int x, const Integer &y);
std::ostream & operator <<(std::ostream & out, const Integer &a);
std::istream & operator >> (std::istream &input, Integer &a);
