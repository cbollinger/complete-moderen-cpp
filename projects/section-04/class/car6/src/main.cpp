#include "car.h"
#include <iostream>

int main() {
    using namespace std;

    Car::ShowCount();

    Car car(4);
    car.Dashbord();

    Car c1, c2;
    Car::ShowCount();
    
    return 0;    
}
