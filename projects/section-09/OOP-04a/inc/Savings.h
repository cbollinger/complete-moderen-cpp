#include "Account.h"
class Savings : public Account {
private:
    float m_Rate; // interest rate accumlate the interest into the Savings account
public:
    Savings(const std::string &name, float balance, float rate);
    ~Savings();
    float GetInterestRate() const ;
    void AccumulateInterest() ;
};
