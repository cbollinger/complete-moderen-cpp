  #include <integer.h>
  #include <iostream>

int main() {
        using namespace std;

// 1) Overloading operator+     
        Integer a(1), b(2);
        Integer sum = a + b;

 // 6) Overloading operator+ with int
        Integer sum1 = a + 5;  // a.operator+(5)
        Integer sum2 = 5 + a;  // 1. operand is of primitive type -> overlaod as global function
        cout << sum1.GetValue() << ", " << sum2.GetValue()<< endl;

        return 0;
    }
