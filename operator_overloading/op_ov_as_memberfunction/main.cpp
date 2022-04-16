#include<iostream>
#include<vector>
#include"my_string.h"

using namespace std;

int main()
{
    cout<<boolalpha<<endl;
    Mystring larry{"Larry"};        // Overloaded constructor
    Mystring moe{"Moe"};            // Overloaded constructor

    Mystring stooge = larry;
    larry.display();
    moe.display();

    cout<<(larry == moe)<<endl;
    cout<<(larry == stooge)<<endl;

    larry.display();
    Mystring larry2 = -larry;
    larry2.display();


    Mystring stooge1 = larry + "Meo" ;
    // Mystring stooge2 = "larry" + moe ;

    Mystring two_stooges = moe + " " + larry;
    two_stooges.display();

}