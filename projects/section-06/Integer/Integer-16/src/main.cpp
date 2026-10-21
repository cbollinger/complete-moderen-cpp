#include <integer.h>
#include <iostream>

using namespace std;

class Product {
    Integer m_Id;

public:
    Product(const Integer &id) :m_Id (id) {         // use of initialization list
	cout << "Product(const Integer &)" << endl;
    }
    ~Product() {
	cout << "~Product()" << endl;
    }
};


int main() {

// 01 - Initialization Integer Classw
    // Integer a1 {3};   
    // cout << a1 << endl;

// 02 - Initialization Product Class
    Product p {5};


    return 0;
}
