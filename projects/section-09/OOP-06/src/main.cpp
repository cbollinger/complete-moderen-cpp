#include <iostream>
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"

using namespace std;
int main()
{
    Checking ch("Bob", 100);
    Account *pAccount = &ch; 

    // Checking *pChecking = pAccount;   // gives an error
    Checking *pChecking = static_cast<Account*>(pAccount);   // gives an error
    
    return 0;
}
