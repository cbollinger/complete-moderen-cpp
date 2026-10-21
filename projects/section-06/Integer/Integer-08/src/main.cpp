  #include <integer.h>
  #include <iostream>
  #include <sstream>

int main() {
        using namespace std;
        istringstream cin_sim("63");

// 1) Overloading operator+     
        Integer a(1), b(2);
        Integer sum = a + b;
	
 // 5) Overloading operator=          Assignment
        Integer c;
        c = a;
        cout << c.GetValue() << endl;
	
 // 8) Overloading operator>> 
        cin >> c;
        cout << c << endl;;

	return 0;
    }
