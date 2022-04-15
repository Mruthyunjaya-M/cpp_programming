#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include<string>

class Account{
    // Attribute
    private:
        std::string name;
        double balance;
    
    // Methods
    public:
    void set_balance(double bal){ balance = bal;}
    double get_balance() {return balance;}

    // Methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);

};

#endif // _ACCOUNT_H_