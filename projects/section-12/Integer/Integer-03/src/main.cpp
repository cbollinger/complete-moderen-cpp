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
	m_Name { forward<T1>(name) },     // preserve value type T1 
	m_Id   { forward<T2>(id)   } {    // prseerve value type T2
	cout << "Employee(T1 &&, T2 &&)" << endl;
    }
};

template<typename T1, typename T2>
Employee *Create(T1 &&a, T2 &&b) {
    return new Employee(forward<T1>(a), forward<T2>(b));
}

int main() {

    int val {100};
    string name {"christian"};
    
    cout << "Value Type Presevation Required:" << endl;
    cout << "---------- emp 5 -------------" << endl;
    Employee emp5 { "christian", Integer {63} };
    cout << "---------- emp 6 -------------" << endl;
    Employee emp6 { string {"christian"}, val };

    cout << endl;
    cout << "Factroy Class:" << endl;
    cout << "---------- emp 7 -------------" << endl;
    auto emp7 = Create( "christian", Integer {63} );

    cout << endl;
    cout << "-------- Destructor ----------" << endl;

    (void)emp7;
    return 0;
}
