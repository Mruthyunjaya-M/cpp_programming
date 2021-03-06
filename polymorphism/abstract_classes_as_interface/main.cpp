#include<iostream>

using namespace std;

class account
{
    friend ostream& operator<<(ostream& os, const account &acc);
public:
    virtual void withdraw(double amount)
    {
        cout<<"In account::withdraw"<<endl;
    }
    virtual ~account()
    {
        cout<<"~account Destructor"<<endl;
    }
};

ostream& operator<<(ostream& os, const account &acc)
{
    os<<"Account display"<<endl;
    return os;
}

class checking: public account
{
    friend ostream& operator<<(ostream& os, const checking &acc);
public:
    virtual void withdraw(double amount)
    {
        cout<<"In checking::withdraw"<<endl;
    }
    virtual ~checking()
    {
        cout<<"~checking Destructor"<<endl;
    }
};

ostream& operator<<(ostream& os, const checking &acc)
{
    os<<"checking display"<<endl;
    return os;
}

class savings: public account
{
    friend ostream& operator<<(ostream& os, const savings &acc);
public:
    virtual void withdraw(double amount)
    {
        cout<<"In savings::withdraw"<<endl;
    }
    virtual ~savings()
    {
        cout<<"~savings Destructor"<<endl;
    }
};

ostream& operator<<(ostream& os, const savings &acc)
{
    os<<"savings display"<<endl;
    return os;
}

class trust: public account
{
    friend ostream& operator<<(ostream& os, const trust &acc);
public:
    virtual void withdraw(double amount)
    {
        cout<<"In trust::withdraw"<<endl;
    }
    virtual ~trust()
    {
        cout<<"~trust Destructor"<<endl;
    }
};

ostream& operator<<(ostream& os, const trust &acc)
{
    os<<"trust display"<<endl;
    return os;
}

int main()
{
    // account account_obj;
    // cout<<account_obj;

    // checking checking_obj;
    // cout<<checking_obj;

    // savings savings_obj;
    // cout<<savings_obj;

    // trust trust_obj;
    // cout<<trust_obj;

    account *p1 = new account();
    cout<<*p1<<endl;
    p1->withdraw(1000);

    account *p2 = new checking();
    cout<<*p2<<endl;
    p2->withdraw(2000);

}