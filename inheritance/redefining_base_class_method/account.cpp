#include<iostream>
#include"account.h"

using namespace std;

account::account()
:balance{0.0}
{
    cout<<"account No args-Constructor"<<endl;
}

account::account(double amount)
:balance{amount}
{
    cout<<"account Single args-Constructor"<<endl;
}

account::~account()
{
    cout<<"account Destructor"<<endl;
}

void account::deposit(double amount)
{
    balance += amount;
    cout<<"account::deposit called balance = "<<balance<<" amount = "<<amount<<endl;
}

void account::withdraw(double amount)
{
    if(balance-amount >= 0 )
        balance -= amount;
    else
        cout<<"Insuffient found"<<endl;
    cout<<"account_Class::withdraw called balance = "<<balance<<" amount = "<<amount<<endl;
}

ostream& operator<<(ostream& os, const account &source)
{
    os<< "Account balance: " << source.balance <<endl;
    return os;
}