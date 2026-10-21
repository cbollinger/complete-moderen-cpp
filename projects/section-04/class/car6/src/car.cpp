#include "car.h"
#include "iostream"


// initialization of static member variables
int Car::count = 0;

// default constructor
Car::Car() {
    ++count;  //increment static member variable
    std::cout << "Car()" << std::endl;
}

// Parameterized constructor
Car::Car(float amount) {
    ++count;              //increment static member variable
    fuel = amount;  
    std::cout << "Car(" << amount << ")" << std::endl;
}

// destructor
Car::~Car() {
    --count;              //decrement static member variable
    std::cout << "~Car()" << std::endl;
}

void Car::FillFuel(float amount) { fuel = amount;}

void Car::Accelerate() {
    this->speed++;            // member acces with this pointer
    this->fuel -= 0.5f;       // member acces with this pointer
}

void Car::Brake() { speed = 0; }

void Foo(const Car &car) {}
// help the compiler to distinguishes local and member variables
// invoke Foo() function from a member function
// invoke Foo() function and pass Car object as an argument
// derefence this pointer give back an object
void Car::AddPassengers(int passengers) {
    this->passengers = passengers; 
    Foo(*this);                    
}

void Car::Dashbord() const {
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Passenger: " << passengers << std::endl;
    // Not allowed in const member function!
    // this->fuel++;
}

void Car::ShowCount() {std::cout << "Number of Cars: " << count << std::endl;}
