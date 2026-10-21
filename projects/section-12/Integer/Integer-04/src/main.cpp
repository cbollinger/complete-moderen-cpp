#include <integer.h>
#include <iostream>

using namespace std;

void Print() {                                        // Base Case Function
    cout << endl;
}

template<typename T, typename...Params>              // Template parameter pack
void Print(T &&a, Params&&... args) {      // Function parameter pack
    // cout << sizeof...(args) << ", " << sizeof...(Params) << endl;
    cout << a;
    if(sizeof...(args) != 0) {
	cout << ", ";
    }
    Print(forward<Params>(args)...);                        // still pass by value                        

}

int main() {

    Integer val {1};
    Print( 0, val, Integer {2} );

    return 0;
}

/* Recursive Expansion
   1. Print(1, 2.5, 3, "4") a=1,   args= 2.5, 3, "4"
   2. Print(2.5, 3, "4")    a=2.5, args=3, "4"
   3. Print(3, "4")         a=3,   args="4"
   4. Print("4")            a="4", args=""
   5. Print()               a="",  args=""
*/
