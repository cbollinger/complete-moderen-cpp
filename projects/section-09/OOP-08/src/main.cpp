#include <iostream>
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"
#include <typeinfo>

using namespace std;
int main()
{
    Savings ch("Bob", 100, 60);
    // Checking ch("Bob", 100, 60);
    Transact(&ch);
    
    return 0;
}
