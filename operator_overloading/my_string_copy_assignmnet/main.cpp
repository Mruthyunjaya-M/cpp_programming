#include<iostream>
#include<vector>
#include"my_string.h"

using namespace std;

int main()
{
    Mystring a{"Hello"};            // overloaded constructor
    Mystring b;                     // No-args constructor
    b=a;                            // Copy constructor
                                    // b.operatro(a);
    b = "This is test";              // b.operator={"This is test"}

    a.display();
    // std::cout<<a;
    // cout<<b;
}