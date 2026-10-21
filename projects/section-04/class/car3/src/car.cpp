#include "car.h"
#include "iostream"

// default constructor
Car::Car() {

    std::cout << "Car()" << std::endl;
}

// Parameterized constructor
Car::Car(float amount) {
    fuel = amount;
    
    std::cout << "Car(" << amount << ")" << std::endl;
}

// destructor
Car::~Car() {
    std::cout << "~Car()" << std::endl;
}



void Car::FillFuel(float amount) {
    fuel = amount;
}

void Car::Accelerate() {
    speed++;
    fuel -= 0.5f;
}

void Car::Brake() {
    speed = 0;
}

void Car::AddPassengers(int count) {
    passengers = count;
}

void Car::Dashbord() {

    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Passenger: " << passengers << std::endl;
}
