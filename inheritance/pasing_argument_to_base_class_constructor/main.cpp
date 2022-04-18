#include <iostream>
#include <string>

using namespace std;

class base
{
    // Note friend of base have acess to all
private:
    int value;

public:
    base() : value{0} { cout << "Base no-args constructor" << endl; }
    base(int x) : value{x} { cout << "Base(int) overloaded constructor" << endl; }
    ~base() { cout << "Base destructor" << endl; }
};

class derived : public base
{
    // Note friends of derived have acess to only what derived has acess to
private:
    int doubled_value;

public:
    derived() : base{}, doubled_value{0} { cout << "derived no-args constructor" << endl; }
    derived(int x) :base{x}, doubled_value{x * 2} { cout << "derived(int) overloaded constructor" << endl; }
    ~derived() { cout << "derived destructor" << endl; }
};

int main()
{
    // derived derived_object;
    derived derived_object{1000};
}