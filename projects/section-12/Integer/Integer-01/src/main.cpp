#include <integer.h>
#include <iostream>
#include <string>

using namespace std;

class Employee {
    string m_Name;
    Integer m_Id;

public:
    Employee(const string &name, const Integer &id) :
	m_Name { name },
	m_Id { id } {
	cout << "Employee(const string &, const Integer &)" << endl;
    }
    Employee(string &&name, Integer &&id) :
	m_Name { name },
	m_Id { move(id) } {
	cout << "Employee(string &&, Integer &&)" << endl;
    }
};

int main() {

    Employee emp1 { "christian", 63 };

    int val {100};
    Employee emp2 { "christian", val };
    
    string name {"christian"};
    Employee emp3 { name, 63 };

    Employee emp4 { name, val };


    // we needed to implement 4 constructors !!!
    
    return 0;
}
