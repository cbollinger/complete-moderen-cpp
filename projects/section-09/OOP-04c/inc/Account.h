#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string m_Name;
    int m_AccNo;
    static int s_ANGenerator; // account number generator

protected:
    float m_Balance; // protected members can be accessed by child classes

public:
    Account(const std::string &name, float balance);
    ~Account();

    const std::string GetName() const;
    float GetBalance() const;
    int GetAccountNo() const;

    virtual void AccumulateInterest();
    virtual void Withdraw(float amount);
    void Deposit(float amount);
    virtual float GetInterestRate() const;
};

#endif // ACCOUNT_H
