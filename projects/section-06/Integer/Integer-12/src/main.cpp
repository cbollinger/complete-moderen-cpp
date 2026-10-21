#include <integer.h>
#include <iostream>

using namespace std;

void Print(Integer a) {(void)a,}

int main() {

    Integer a1{5};   // explicit type cast with constructor

    // Initialization
    Integer a2 = 5;  // implicit type conversion

    Print(5);        // implicit type conversion

    // Assignment
    a1 = 7;          // implicti type conversion
    return 0;
}
