#include "car.h"

int main() {

    Car c;
    c.FillFuel(6);

    Car b(5);

    for (int i=0; i<6; i++) {
        c.Accelerate();
        b.Accelerate();
    }

    c.Dashbord();
    b.Dashbord();
    
    return 0;
    
}
