class Car {

private:
    float fuel;
    float speed;
    int passengers;

public:
    Car();       // default constructor
    Car(float);  // Paramterized constructor
    ~Car();      // destructor
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashbord();
};
