#include"account.h"

void Account::set_name(std::string s){
    name = s;
}

std::string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance+=amount;
    return true;
}

bool Account::withdraw(double amount){

    bool Retval=false;
    if(balance-amount>0){
        balance-=amount;
        Retval=true;
    }
    return Retval;
}
