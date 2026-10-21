#include <iostream>
#include "vars.h"

using namespace std;

int main() {
    setGlobal(100);
    cout << "The value of global is: " << getGlobal() << endl;
    return 0;
}
