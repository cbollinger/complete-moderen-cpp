#include <integer.h>
#include <iostream>

using namespace std;

void Print(Integer a) {(void)a; }

Integer::operator int() {
    return *m_pInt;
}

int main() {

    Integer a1{5};   // explicit type cast with constructor

    int x = static_cast<int>(a1);    // use conversion operator
    return 0;
}
