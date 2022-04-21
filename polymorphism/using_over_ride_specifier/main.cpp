#include<iostream>

using namespace std;

class base
{
    public:
        virtual void say_hello() const
        {
            cout<<"Hello - i am a base class object"<<endl;
        }
        virtual ~base()
        {
            cout<<"base class object Destructor"<<endl;
        }
};

class derived : public base
{
    public:
        virtual void say_hello() const override // Forgot the const
        {
            cout<<"Hello - i am a derived class object"<<endl;
        }
        virtual ~derived()
        {
            cout<<"derived class object Destructor"<<endl;
        }
};


int main()
{
    base *p1 = new base;
    p1->say_hello();

    derived *p2 = new derived;
    p2->say_hello();

    base *p3 = new derived;
    p3->say_hello();
}
