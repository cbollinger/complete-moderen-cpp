  #include <integer.h>
  #include <iostream>

int main() {
        using namespace std;

// 1) Overloading operator+     
        Integer a(1), b(2);
        Integer sum = a + b;
	
 // 5) Overloading operator=          Assignment
        Integer c;
        c = a;
        cout << c.GetValue() << endl;
        return 0;
    }
