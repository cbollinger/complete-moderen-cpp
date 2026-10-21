#include <integer.h>
#include <iostream>

using namespace std;

class Product {
    Integer m_Id;

public:
    Product(const Integer &id) : m_Id{id} {
	cout << "Product(const Integer &)" << endl;
    }
    ~Product() {
	cout << "~Product" << endl;
    }
    const Integer& GetInteger() const {
	return m_Id;
    }
    operator Integer() {   // syntactic sugar
	return m_Id;
    }
};


void Print(Integer a) {(void)a; }

Integer::operator int() {
    return *m_pInt;
}

int main() {

    Product p {5};
    Integer id_1 = p.GetInteger();
    Integer id_2 = p;                 // id_2 = p.operator Integer();

    Integer id_3 {5};

    if(id_1 == p) {
	cout << "Id_1 matches with the product\n" << endl;
    }
    
    return 0;
}
