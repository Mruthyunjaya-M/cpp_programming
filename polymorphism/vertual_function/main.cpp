#include<iostream>

using namespace std;

class account
{
    public:
        virtual void withdraw(double maount)
        {
            cout<<"In account::withdraw"<<endl;
        }
};

class checking: public account
{
    public:
        virtual void withdraw(double maount)
        {
            cout<<"In checking::withdraw"<<endl;
        }
};


class savings: public account
{
    public:
        virtual void withdraw(double maount)
        {
            cout<<"In savings::withdraw"<<endl;
        }
};

class trust: public account
{
    public:
        virtual void withdraw(double maount)
        {
            cout<<"In trust::withdraw"<<endl;
        }
};

void greetings(account &obj)
{
    cout<<"Greeting: ";
    obj.withdraw(10.2);
}

int main()
{
    cout<<"==== Pointers ===="<<endl;

    // account *p1 = new account;
    // account *p2 = new savings;
    // account *p3 = new checking;
    // account *p4 = new trust;

    // p1->withdraw(1000);
    // p2->withdraw(1000);
    // p3->withdraw(1000);
    // p4->withdraw(1000);

    account account_obj;
    greetings(account_obj);

    checking checking_obj;
    greetings(checking_obj);

    savings savings_obj;
    greetings(savings_obj);

    trust trust_obj;
    greetings(trust_obj);


    // cout<<"==== Clean up ===="<<endl;
    // delete p1;
    // delete p2;
    // delete p3;
    // delete p4;

    return 0;
}