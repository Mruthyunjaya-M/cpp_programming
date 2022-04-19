#include<iostream>

using namespace std;

class base
{
    public:
        void say_hello()const
        {
            cout<<"Hello i am in base class object"<<endl;
        }
};

class derived: public base
{
    public:
        void say_hello()const
        {
            cout<<"Hello i am in derived class object"<<endl;
        }
};

void greetings(const base &obj)
{
    cout<<"Greeting: ";
    obj.say_hello();
}

int main()
{
    base base_object;
    base_object.say_hello();

    derived derived_class;
    derived_class.say_hello();

    greetings(base_object);
    greetings(derived_class);

    base *baseprt = new derived;
    baseprt->say_hello();

}