#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

class account
{
    friend std::ostream& operator<<(std::ostream &os, const account &account_source);
    protected:
        double balance;
    public:
        account();
        account(double amount);
        void deposit(double amount);
        void withdraw(double amount);
        ~account();
};

#endif