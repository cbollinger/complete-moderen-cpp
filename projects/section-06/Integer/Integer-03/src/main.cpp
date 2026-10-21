  #include <integer.h>
  #include <iostream>

int main() {
        using namespace std;

 // 1) Overloading operator+     
        Integer a(1), b(2);
        Integer sum = a + b;
        cout << sum.GetValue() << endl;

 // 3) Overloading operator++     Post-Increment
        sum++;
        cout << sum.GetValue() << endl;

        return 0;
    }
