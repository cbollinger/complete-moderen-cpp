#include <integer.h>
#include <iostream>

using namespace std;

class Product {
    Integer m_Id;

public:
    Product(const Integer &id)  {
	cout << "Product(const Integer &)" << endl;
	m_Id = id;                          // use of assignment
    }
    ~Product() {
	cout << "~Product()" << endl;
    }
};

int main() {

// 01 - Assignment Integer Classe
    // Integer a1;   
    // a1 = 3;   // a1 = Integer(8);
    // cout << a1 << endl;

// 02 - Assignment Product Class
    Product p {5};

    return 0;
}
