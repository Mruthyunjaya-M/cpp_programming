#include<iostream>
#include"account.h"
#include"savings_account.h"

using namespace std;

int main()
{
    // Use account class
    cout<<"\n====================Account Class=========================="<<endl;
    account normala_account{1000};
    cout<<normala_account<<endl;

    normala_account.deposit(500.0);
    cout<<normala_account<<endl;

    normala_account.withdraw(1000.0);
    cout<<normala_account<<endl;

    normala_account.withdraw(5000.0);
    cout<<normala_account<<endl;

    cout<<"\n====================Savings Account Class=========================="<<endl;
    savings_account savings_account{1000,5.0};
    cout<<savings_account<<endl;

    savings_account.deposit(1000.0);
    cout<<savings_account<<endl;

    savings_account.withdraw(2000.00);
    cout<<savings_account<<endl;

    savings_account.withdraw(1000.00);
    cout<<savings_account<<endl;

    cout<<endl;

}