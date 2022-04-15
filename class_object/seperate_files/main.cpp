#include<iostream>
#include"account.h"

using namespace std;

int main()
{
    Account My_account;
    My_account.set_name("My account");
    My_account.set_balance(1000);

    if(My_account.deposit(200)){
        cout<<"Deposit is ok"<<endl; 
    }
    else{
        cout<<"Deposit not allowed"<<endl; 
    }

    if(My_account.withdraw(500)){
        cout<<"Withdraw ok"<<endl; 
    }
    else{
        cout<<"Not sufficient found"<<endl; 
    }

    if(My_account.withdraw(1500)){
        cout<<"Withdraw ok"<<endl; 
    }
    else{
        cout<<"Not sufficient found"<<endl; 
    }


    return 0;
}
