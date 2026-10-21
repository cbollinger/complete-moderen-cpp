#include "car.h"
#include <iostream>

int main() {
    using namespace std;

    Car::ShowCount();

    Car car(4);
    // car.FillFuel(6);
    for(int i=0; i<4; i++) {
	car.Accelerate();
    }

    car.Dashbord();

    Car c1, c2;

    Car::ShowCount();
    
    return 0;    
}
