#include <iostream>
#include <string>

using namespace std;

class base
{
    // Note friend of base have acess to all
private:
    int value;

public:
    // No args constructor
    base() : value{0} { cout << "Base no-args constructor" << endl; }
    // Single args constructor
    base(int x) : value{x} { cout << "Base(int) overloaded constructor" << endl; }
    // Destructor
    ~base() { cout << "Base destructor" << endl; }

    void display_data(void){cout<<"derived class Data = "<<value<<endl;}

    // Copy constructor
    base(const base &source)
    :value{source.value}
    {
        cout<<"Base copy constructor"<<endl;
    }
    
    // Operatro overloading
    base& operator=(const base&rhs)
    {
        cout<<"Base operator = "<<endl;
        if(this != &rhs)
        {
            value = rhs.value;
        }
        return *this;
    }
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
    void display_data(void){ base::display_data(); cout<<"derived class Data = "<<doubled_value<<endl;}

    // Copy constructor
    derived(const derived &source)
    :base{source}, doubled_value{source.doubled_value}
    {
        cout<<"derived copy constructor"<<endl;
    }
    
    // Operatro overloading
    derived& operator=(const derived&rhs)
    {
        cout<<"derived operator = "<<endl;
        if(this == &rhs)
            return *this;
        base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }
};

int main()
{
    // base base_class{100};                    // Overloaded constructor
    // printf("1\n");
    // base base_class1{base_class};            // Copy constructor
    // printf("2\n");
    // base_class = 5200;
    // printf("3\n");
    // base_class.display_data();
    // base_class1.display_data();
    // base_class = base_class1;                // Copy assignment
    // base_class.display_data();
    // base_class1.display_data();

    derived derived_class_object{100};
    derived derived_class_object1{derived_class_object};
    derived_class_object.display_data();
    derived_class_object1.display_data();
    printf("1\n");
    derived_class_object = 500;
    printf("2\n");
    derived_class_object.display_data();
    derived_class_object1.display_data();


}