#include<iostream>

using namespace std;

class account
{
    public:
        virtual void withdraw(double maount)
        {
            cout<<"In account::withdraw"<<endl;
        }
        virtual ~account(){ cout<<"account destructor"<<endl; }
};

class checking: public account
{
    public:
        // virtual void withdraw(double maount)
        void withdraw(double maount)
        {
            cout<<"In checking::withdraw"<<endl;
        }
        // virtual ~checking(){ cout<<"checking destructor"<<endl; }
        ~checking(){ cout<<"checking destructor"<<endl; }
};


class savings: public account
{
    public:
        // virtual void withdraw(double maount)
        void withdraw(double maount)
        {
            cout<<"In savings::withdraw"<<endl;
        }
        // virtual ~savings(){ cout<<"savings destructor"<<endl; }
        ~savings(){ cout<<"savings destructor"<<endl; }
};

class trust: public account
{
    public:
        // virtual void withdraw(double maount)
        void withdraw(double maount)
        {
            cout<<"In trust::withdraw"<<endl;
        }
        // virtual ~trust(){ cout<<"trust destructor"<<endl; }
        ~trust(){ cout<<"trust destructor"<<endl; }
};

void greetings(account &obj)
{
    cout<<"Greeting: ";
    obj.withdraw(10.2);
}

int main()
{
    cout<<"==== Pointers ===="<<endl;

    account *p1 = new account;
    account *p2 = new savings;
    account *p3 = new checking;
    account *p4 = new trust;

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    // account account_obj;
    // greetings(account_obj);

    // checking checking_obj;
    // greetings(checking_obj);

    // savings savings_obj;
    // greetings(savings_obj);

    // trust trust_obj;
    // greetings(trust_obj);


    cout<<"==== Clean up ===="<<endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;


    return 0;
}