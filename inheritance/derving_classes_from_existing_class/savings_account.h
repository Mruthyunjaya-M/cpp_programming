#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include"account.h"

class savings_account : public account
{
private:
    /* data */
public:
    double intrest_rate;
    void deposit(double amount);
    void withdraw(double amount);
    savings_account();
    ~savings_account();
};

#endif