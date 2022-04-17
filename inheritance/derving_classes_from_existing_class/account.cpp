#include<iostream>
#include"account.h"

using namespace std;

account::account()
:balance{0},name{"An Account"}
{
    cout<<"account Constructor"<<endl;
}

account::~account()
{
    cout<<"account Destructor"<<endl;
}

void account::deposit(double amount)
{
    cout<<"account::deposit called "<<amount<<endl;
}

void account::withdraw(double amount)
{
    cout<<"account::withdraw called "<<amount<<endl;
}