#include <iostream>
#include "Checking.h"

using namespace std;
int main()
{
    Checking acc("Bob", 1000);  // invokes the inherited base class constructor
    cout << "Initial balance: " << acc.GetBalance() << endl;
    acc.Withdraw(980);
    cout << "Balance: " << acc.GetBalance() << endl;
        
    return 0;
}
