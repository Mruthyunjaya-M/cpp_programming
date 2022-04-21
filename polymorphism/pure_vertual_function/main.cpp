#include<iostream>
#include<vector>

using namespace std;

class shape // Abstract base class
{
    private:
        // Attribute common to all shapes
    public:
        virtual void draw() = 0; // pure virtual function
        virtual void rotate() = 0; // pure virtual function
        virtual ~shape(){ cout<<"shape Destructor"<<endl; };
};

class open_shape : public shape // Abstract base class
{
    public:
        virtual ~open_shape()
        {
            cout<<"open_shape Destructor"<<endl;
        }
};

class closed_shape : public shape // Abstract class
{
    public:
        virtual ~closed_shape()
        {
            cout<<"closed_shape Destructor"<<endl;
        }
};

class line : public open_shape // Concrete class
{
    public:
        virtual void draw() override
        {
            cout<<"line class draw method"<<endl;
        }
        virtual void rotate() override
        {
            cout<<"line class rotate method"<<endl;
        }
        virtual ~line()
        {
            cout<<"line Destructor"<<endl;
        }
};

class circle : public closed_shape // Concrete class
{
    public:
        virtual void draw() override
        {
            cout<<"circle class draw method"<<endl;
        }
        virtual void rotate() override
        {
            cout<<"circle class rotate method"<<endl;
        }
        virtual ~circle()
        {
            cout<<"circle Destructor"<<endl;
        }
};

class square : public closed_shape // Concrete class
{
    public:
        virtual void draw() override
        {
            cout<<"square class draw method"<<endl;
        }
        virtual void rotate() override
        {
            cout<<"square class rotate method"<<endl;
        }
        virtual ~square()
        {
            cout<<"square Destructor"<<endl;
        }
};

void screen_refresh(vector<shape*> &shapes)
{
    cout<<"Refreshing"<<endl;
    for(const auto p:shapes )
        p->draw();
}

int main()
{
    // shape s;               // main.cpp:86:11: error: cannot declare variable ‘s’ to be of abstract type ‘shape’
    // shape *p = new shape;  // main.cpp:86:11: error: cannot declare variable ‘s’ to be of abstract type ‘shape’

    // circle circle_object;
    // circle_object.draw();

    // shape *ptr = new circle();
    // ptr->draw();
    // ptr->rotate();

    // delete ptr;

    shape *ptr1 = new circle();
    shape *ptr2 = new line();
    shape *ptr3 = new square();

    vector<shape*> shapes{ptr1,ptr2,ptr3};

    // for(const auto p : shapes)
    //     p->draw();
    screen_refresh(shapes);


    // ptr1->draw();
    // ptr1->rotate();

    // ptr2->draw();
    // ptr2->rotate();

    // ptr3->draw();
    // ptr3->rotate();

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0 ;
}