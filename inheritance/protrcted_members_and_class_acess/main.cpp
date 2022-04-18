#include<iostream>
#include<string>

using namespace std;

class base
{
    // Note friend of base have acess to all
    public:
        int a{0};
        void display(){std::cout<<"a = "<<a<<"b = "<<b<<"c "<<c<<endl;} // Member method acess to all
    protected:
        int b{0};
    private:
        int c{0};

};

class derived: public base
{
    // Note friends of derived have acess to only what derived has acess to


    // a will be public
    // b will be protected
    // c will be accessible private
    public:
        void acess_base_members()
        {
            a = 100;    // Ok
            b = 200;    // Ok
            // c = 300;    // Not accessible
        }
};

int main()
{
    cout<<"==== Base member acess from base objects ===="<<endl;
    base base_class;
    base_class.a = 100;                          // Ok
    // base_class.b = 200;                       // Compiler error
    // base_class.c = 300;                       // Compiler error

    cout<<"base_class.a = "<<base_class.a<<endl;

    derived derived_class;
    derived_class.a = 500;                      // Ok
    // derived_class.b = 500;                      // Compiler error
    // derived_class.c = 500;                      // Compiler error

    cout<<"derived_class.a = "<<derived_class.a<<endl;

}
