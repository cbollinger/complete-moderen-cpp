#include <iostream>
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"
#include <typeinfo>

using namespace std;
int main()
{
    Savings ch("Bob", 100, 60);
    Account *p = &ch;
    // Transact(&ch);
    
    const type_info &ti = typeid(*p);

    if(ti == typeid(Savings)) {
    cout << "p points to savings object" << endl;
    }
    else {
    cout << "Not pointing to savings object" << endl;
    }
    return 0;
}
