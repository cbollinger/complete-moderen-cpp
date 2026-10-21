#include "Account.h"
class Checking : public Account {
private:
    float m_MinimumBalance {50};
public:
    // Constructor Inheritance - inherits all constructor of the base
    using Account::Account;
    // Constructor with 2 Parameters is obsolete due to the constructor inheritance
    // Checking(const std::string &name, float balance);
    Checking(const std::string &name, float balance, float minbalance);
    ~Checking();
    void Withdraw(float amount) override;
    float GetMinimumBalance()const;
};
