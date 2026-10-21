#include "Account.h"

class Checking : public Account {

private:
    float m_MinimumBalance {50};
public:
    // Constructor Inheritance
    using Account::Account;

    Checking(const std::string &name, float balance, float minbalance);
    ~Checking();
    void Withdraw(float amount);
    float GetMinimumBalance()const;
};
