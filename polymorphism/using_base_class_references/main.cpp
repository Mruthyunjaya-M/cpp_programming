#include<iostream>

using namespace std;

class account
{
    public:
        virtual void withdraw(double maount)
        {
            cout<<"In account::withdraw"<<endl;
        }
        virtual ~account()
        {
            cout<<"account class object Destructor"<<endl;
        }
};

class checking: public account
{
    public:
        virtual void withdraw(double maount)
        {
            cout<<"In checking::withdraw"<<endl;
        }
        virtual ~checking()
        {
            cout<<"checking class object Destructor"<<endl;
        }
};


class savings: public account
{
    public:
        virtual void withdraw(double maount)
        {
            cout<<"In savings::withdraw"<<endl;
        }
        virtual ~savings()
        {
            cout<<"savings class object Destructor"<<endl;
        }
};

class trust: public account
{
    public:
        virtual void withdraw(double maount)
        {
            cout<<"In trust::withdraw"<<endl;
        }
        virtual ~trust()
        {
            cout<<"trust class object Destructor"<<endl;
        }
};

void do_withdraw(account &obj,double amount)
{
    cout<<"do_withdraw: ";
    obj.withdraw(amount);
}

int main()
{
    account account_obj;
    account &account_ref = account_obj;
    account_ref.withdraw(1000);

    trust trust_obj;
    account &account_ref1 = trust_obj;
    account_ref1.withdraw(2000);

    account a1;
    savings a2;
    checking a3;
    trust a4;

    do_withdraw(a1, 1000 );
    do_withdraw(a2, 2000 );
    do_withdraw(a3, 3000 );
    do_withdraw(a4, 4000 );

    return 0;
}