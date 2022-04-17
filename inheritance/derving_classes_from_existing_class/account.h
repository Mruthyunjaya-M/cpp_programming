#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class account
{
    public:
        double balance;
        std::string name;
        void deposit(double amount);
        void withdraw(double amount);
        account();
        ~account();
};

#endif