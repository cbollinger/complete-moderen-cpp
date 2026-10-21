#include "car.h"
#include <iostream>

int main() {
    using namespace std;

    cout << "car c" << endl;
    Car c;
    c.Dashbord();

    cout << "\ncar b" << endl;
    Car b(5);
    b.Dashbord();
    
    return 0;
    
}
