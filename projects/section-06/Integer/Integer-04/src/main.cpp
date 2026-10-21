  #include <integer.h>
  #include <iostream>

int main() {
        using namespace std;

 // 1) Overloading operator+     
        Integer a(1), b(2);
        Integer sum = a + b;
	
 // 4) Overloading operator==       Comparison
        cout << (a == b) << endl;

        return 0;
    }
