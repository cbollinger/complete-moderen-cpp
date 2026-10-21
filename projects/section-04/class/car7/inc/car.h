class Car {

private:
    float fuel     {0}; // non-static data member initialization
    float speed    {0}; // non-static data member initialization
    int passengers {0}; // non-static data member initialization

    static int count;   // static member function

public:
    Car();             // default constructor
    Car(float amunt);  // Paramterized constructor
    Car(float amount, int passengers);
    ~Car();      // destructor
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);

    void Dashbord () const;
    static void ShowCount ();
};
