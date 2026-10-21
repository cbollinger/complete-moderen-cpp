#include <iostream>
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"

using namespace std;
int main()
{
    Checking ch("Bob", 100);
    Account *pAccount = &ch;  // Upcasting: Upcast a child class object ot a base class object
                              // Through the base class object, can the memeber functions of
                              // the child class invoked.
                              // works only for poiners resp. references

    Account myAccount = ch;   // Object Slicing!!
    
    return 0;
}
