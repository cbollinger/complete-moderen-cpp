#include "Checking.h"
#include <iostream>

Checking::~Checking() {
}
// Constructor with 2 Parameters is obsolete due to the constructor inheritance
// Checking::Checking(const std::string &name, float balance)
//     : Account(name, balance) {
// }

Checking::Checking(const std::string &name, float balance, float minbalance) : m_MinimumBalance(minbalance), Account(name, balance){
}
void Checking::Withdraw(float amount) {
    if ((m_Balance - amount) > m_MinimumBalance) {
        Account::Withdraw(amount);         // call base class member function
    }
    else {
        std::cout << "Invalid amount" << std::endl; 
    }
}
float Checking::GetMinimumBalance() const {
    return m_MinimumBalance;
}
