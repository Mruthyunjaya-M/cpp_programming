#include<iostream>
#include"savings_account.h"

using namespace std;

savings_account::savings_account()
:savings_account{0.0,0.0}
{
    cout<<"savings_account No Agrs Constructor"<<endl;    
}

savings_account::savings_account(double balance, double intrest_rate)
:account{balance}, intrest_rate{intrest_rate}
{
    cout<<"savings_account 2 Args Constructor"<<endl;    
}

savings_account::~savings_account()
{
    cout<<"savings_account Destructor"<<endl;
}

void savings_account::deposit(double amount)
{
    amount += (amount*intrest_rate/100);
    account::deposit(amount);
    cout<<"savings_account::deposit called "<<amount<<endl;
}

// void savings_account::withdraw(double amount)
// {
//     cout<<"savings_account::withdraw called "<<amount<<endl;
// }

std::ostream& operator<<(std::ostream& os, const savings_account &source )
{
    os<<"Savings account balance = " << source.balance << " Intrest rate = " << source.intrest_rate <<endl;
    return os;
}