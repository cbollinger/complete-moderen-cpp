#include <iostream>
#include "vars.h"

using namespace std;

int main() {
    global = 5;
    Test t;
    cout << "Test::m_Data: "<< t.m_Data << "Global: "<< global << endl;
}
