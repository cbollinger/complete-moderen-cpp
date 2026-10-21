#include "Checking.h"
#include <iostream>

Checking::~Checking() {
}

Checking::Checking(const std::string &name, float balance, float minbalance)
    : Account(name, balance), m_MinimumBalance(minbalance) {
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
