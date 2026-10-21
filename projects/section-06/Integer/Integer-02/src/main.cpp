  #include <integer.h>
  #include <iostream>

int main() {
        using namespace std;

 // 1) Overloading operator+     
        Integer a(1), b(2);
        Integer sum = a + b;
        cout << sum.GetValue() << endl;

 // 2) Overloading operator++     Pre-Increment
        ++sum;
        cout << sum.GetValue() << endl;

        return 0;
    }
