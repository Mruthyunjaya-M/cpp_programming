#include<iostream>
#include<string>

using namespace std;

class base
{
    // Note friend of base have acess to all
    private:
        int value;
    public:
        base():value{0}{cout<<"Base no-args constructor"<<endl;}
        base(int x):value{x}{cout<<"Base(int) overloaded constructor"<<endl;}
        ~base(){cout<<"Base destructor"<<endl;}
};

class derived: public base
{
    using base::base;
    // Note friends of derived have acess to only what derived has acess to
    private:
        int doubled_value;
    public:
        derived():doubled_value{0}{cout<<"derived no-args constructor"<<endl;}
        derived(int x):doubled_value{x*2}{cout<<"derived(int) overloaded constructor"<<endl;}
        ~derived(){cout<<"derived destructor"<<endl;}
};

int main()
{
    // base base_object;
    // base base_object{100};
    // derived derived_object;
    derived derived_object{1000};
    
}