#include<iostream>
#include"my_string.h"

using namespace std;

int main()
{
    Mystring empty;                     // No-args constructor
    Mystring larry("Larry");            // overloaded constructor
    Mystring stooge{larry};              // copy constructor

    empty.display();
    larry.display();
    stooge.display();

}