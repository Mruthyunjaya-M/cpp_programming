#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include"account.h"

class savings_account : public account
{
    friend std::ostream& operator<<(std::ostream& os, const savings_account &source );
protected:
    double intrest_rate;
public:
    savings_account();
    ~savings_account();
    savings_account(double balance, double int_rate);
    void deposit(double amount);
    // Withdrwa is Inherited
};

#endif