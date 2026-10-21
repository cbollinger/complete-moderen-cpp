#include <integer.h>
#include <iostream>

using namespace std;

void DisplayValue(Integer *p) {
    if(!p)
    {
	return;
    }
    cout << p->GetValue() << endl;
}

Integer * GetPointer(int value) {           // Factory function - create an instance of a class
    Integer *p = new Integer {value};
    return p;
}

void Operate(int value) {

    Integer *p = GetPointer(value);

    if(p == nullptr) {
	p = new Integer {value};
    }
    p->SetValue(100);
    DisplayValue(p);
    delete p;
    p = nullptr;
    p = new Integer {};
    *p = __LINE__;
    DisplayValue(p);
    delete p;

}

int main() {

    Operate(5);
    
    return 0;
}
