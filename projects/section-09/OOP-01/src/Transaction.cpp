#include <iostream>
#include <typeinfo>
#include "Account.h"
#include "Checking.h"
#include "Transaction.h"
void Transact(Account * pAccount) {
    std::cout << "Transaction started" << std::endl; 
    std::cout << "Initial balance:" << pAccount->GetBalance() << std::endl;
    pAccount->Deposit(100);
    pAccount->AccumulateInterest();  // polymorphical call

    // if (typeid(*pAccount) == typeid(Checking)) {
    //  Checking *pChecking = static_cast<Checking*>(pAccount);
    //  std::cout << "Minimum balance of Checking:" << pChecking->GetMinimumBalance() << std::endl;
    // }

    Checking *pChecking = dynamic_cast<Checking*>(pAccount);
    if (pChecking != nullptr) {
        std::cout << "Minimum balance of Checking: " << pChecking->GetMinimumBalance() << std::endl;
    }

    pAccount->Withdraw(170);  // polymorphical call
    std::cout << "Interest rate: " << pAccount->GetInterestRate() << std::endl; // polymorphical call
    std::cout << "Final balance: " << pAccount->GetBalance() << std::endl;
}
