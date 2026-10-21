#include <string>

class Account {
private:
    std::string m_Name;
    int m_AccNo;
    static int s_ANGenerator; // account number generator

protected:
        float m_Balance;    // protected members can be access by child class
public:
    Account(const std::string &name, float balance);
    ~Account();
    const std::string GetName()const;
    float GetBalance() const;
    int GetAccountNo() const;

    void AccumulateInterest();
    void Withdraw(float amount);
    void Deposit(float amount);
    float GetInterestRate() const;
};
