#include "car.h"

int main() {

    Car car;
    car.FillFuel(6);

    for (int i=0; i<6; i++)
	car.Accelerate();

    car.Dashbord();
    
    return 0;
    
}
