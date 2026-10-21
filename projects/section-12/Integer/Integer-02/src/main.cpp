#include <integer.h>
#include <iostream>
#include <string>

using namespace std;

class Employee {
    string m_Name;
    Integer m_Id;

public:
    template<typename T1, typename T2>
    Employee(T1 &&name, T2 &&id) :
	m_Name { name },
	m_Id { id } {
	cout << "Employee(T1 &&, T2 &&)" << endl;
    }
};

int main() {

    cout << "Constructor Calls:" << endl;
    cout << "---------- emp 1 -------------" << endl;
    Employee emp1 { "christian", 63 };
    cout << "---------- emp 3 -------------" << endl;
    int val {100};
    Employee emp2 { "christian", val };
    cout << "---------- emp 3 -------------" << endl;
    string name {"christian"};
    Employee emp3 { name, 63 }; 
    cout << "---------- emp 4 -------------" << endl;
    Employee emp4 { name, val };

    cout << endl;
    cout << "Value Type Presevation Required:" << endl;
    cout << "---------- emp 5 -------------" << endl;

    cout << endl;
    cout << "-------- Destructor ----------" << endl;
    
    return 0;
}
