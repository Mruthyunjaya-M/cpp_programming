#include<iostream>
#include"account.h"
#include"savings_account.h"

using namespace std;

int main()
{
    // Use account class
    cout<<"\n====================Account=========================="<<endl;
    account normala_account{};
    normala_account.deposit(200.00);
    normala_account.deposit(50.0);

    cout<<endl;

    cout<<"\n====================Savings Account=========================="<<endl;
    savings_account savings_account{};
    savings_account.deposit(200.00);
    savings_account.deposit(50.0);

    cout<<endl;

}