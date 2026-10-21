#include <iostream>
#include "Transaction.h"
#include "Savings.h"

using namespace std;
int main()
{
    Savings acc("Bob", 100, 0.5f);  // invokes the inherited base class constructor
    Transact(&acc);

    return 0;
}
