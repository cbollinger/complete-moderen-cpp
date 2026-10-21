#include <iostream>
#include "Savings.h"

using namespace std;
int main()
{
    Savings acc("Bob", 1000, 0.5f);
    cout << "Initial balance: " << acc.GetBalance() << endl;
    acc.Deposit(200);
    acc.AccumulateInterest();
    acc.Withdraw(380);
    cout << "Balance: " << acc.GetBalance() << endl;
        
    return 0;
}
