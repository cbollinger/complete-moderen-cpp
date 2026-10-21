#include <iostream>
#include "Transaction.h"

using namespace std;
int main()
{
    Checking acc("Bob", 100);  // invokes the inherited base class constructor
    Transact(&acc);

    return 0;
}
