#include<iostream>

using namespace std;

class I_printable
{
    friend ostream& operator<<(ostream&os, const I_printable &obj);
public:
    virtual void print(std::ostream& os) const = 0;
};

ostream& operator<<(ostream& os, const I_printable &obj)
{
    obj.print(os);
    return os;
}

class account : public I_printable
{
public:
    virtual void print(std::ostream& os) const override
    {
        os<<"Account display"<<endl;
    }
    virtual void withdraw(double amount)
    {
        cout<<"In account::withdraw"<<endl;
    }
    virtual ~account()
    {
        cout<<"~account Destructor"<<endl;
    }
};

class checking: public account
{
public:
    virtual void print(std::ostream& os) const override
    {
        os<<"checking display"<<endl;
    }
    virtual void withdraw(double amount)
    {
        cout<<"In checking::withdraw"<<endl;
    }
    virtual ~checking()
    {
        cout<<"~checking Destructor"<<endl;
    }
};

class savings: public account
{
public:
    virtual void print(std::ostream& os) const override
    {
        os<<"savings display"<<endl;
    }
    virtual void withdraw(double amount)
    {
        cout<<"In savings::withdraw"<<endl;
    }
    virtual ~savings()
    {
        cout<<"~savings Destructor"<<endl;
    }
};

class trust: public account
{
public:
    virtual void print(std::ostream& os) const override
    {
        os<<"trust display"<<endl;
    }
    virtual void withdraw(double amount)
    {
        cout<<"In trust::withdraw"<<endl;
    }
    virtual ~trust()
    {
        cout<<"~trust Destructor"<<endl;
    }
};

class dog : public account
{
    public:
    virtual void print(ostream& os) const override
    {
        os<<"Woof woof"<<endl;
    }
    virtual ~dog()
    {
        cout<<"~Dog destructor"<<endl;
    }
};

void print(const I_printable &obj)
{
    cout<<obj<<endl;
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
    // p1->withdraw(1000);

    account *p2 = new checking();
    cout<<*p2<<endl;
    // p2->withdraw(2000);

    dog *dog_object = new dog();
    cout<<*dog_object<<endl;
    print(*dog_object);

    delete p1;
    delete p2;
    delete dog_object;
}
