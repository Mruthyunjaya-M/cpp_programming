#include<iostream>
#include"savings_account.h"

using namespace std;

savings_account::savings_account()
:intrest_rate{3.0}
{
    cout<<"savings_account Constructor"<<endl;    
}

savings_account::~savings_account()
{
    cout<<"savings_account Destructor"<<endl;
}

void savings_account::deposit(double amount)
{
    cout<<"savings_account::deposit called "<<amount<<endl;
}

void savings_account::withdraw(double amount)
{
    cout<<"savings_account::withdraw called "<<amount<<endl;
}


