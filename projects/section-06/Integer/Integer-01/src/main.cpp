  #include <integer.h>
  #include <iostream>
  #include <sstream>

    void Process(Integer val) {

        (void)val;
    }

    int main() {
        using namespace std;
        istringstream cin_sim("63");

 // 1) Overloading operator+     
        Integer a(1), b(2);
        Integer sum = a + b;
        cout << sum.GetValue() << endl;

 // 2) Overloading operator++     Pre-Increment
        ++sum;
        cout << sum.GetValue() << endl;

 // 3) Overloading operator++     Post-Increment
        sum++;
        cout << sum.GetValue() << endl;
 // 4) Overloading operator==       Comparison
        cout << (a == b) << endl;

 // 5) Overloading operator=          Assignment
        Integer c;
        c = a;
        cout << c.GetValue() << endl;
 // 6) Overloading operator+ with int
        Integer sum1 = a + 5;  // a.operator+(5)
        Integer sum2 = 5 + a;  // 1. operand is of primitive type -> overlaod as global function
        cout << sum1.GetValue() << ", " << sum2.GetValue()<< endl;
 // 7) Overloading operator<< 
        cout << sum1 << ", " << sum2 << endl; // operator <<(std::cout, sum1).operator(std::endl)
 // 8) Overloading operator>> 
        cin >> c;
        cout << c << endl;;
 // 9) Overloading operator() Functin Call Operator 
        b();
        return 0;
    }
