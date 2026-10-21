#include <iostream>
#include "Account.h"

using namespace std;
int main()
{
    Account acc("Bob", 1000);
    cout << "Initial balance: " << acc.GetBalance() << endl;
    acc.Deposit(200);
    acc.Withdraw(380);
    cout << "Balance: " << acc.GetBalance() << endl;
        
    return 0;
}
