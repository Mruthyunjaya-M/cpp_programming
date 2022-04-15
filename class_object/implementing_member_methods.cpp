#include<iostream>
#include<string>

using namespace std;

class Account{
    // Attribute
    private:
        string name;
        double balance;
    
    // Methods
    public:
    void set_balance(double bal){ balance = bal;}
    double get_balance() {return balance;}

    // Methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);

};

void Account::set_name(string s){
    name = s;
}

string Account::get_name(){
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
