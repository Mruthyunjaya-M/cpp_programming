#include<iostream>
#include<vector>
#include"my_string.h"

using namespace std;

int main()
{
    Mystring a{"Hello"};            // Overloaded constructor
    a = Mystring{"Hola"};            // Overloaded constructor then move asignment
    a = "Bonjour";                  // Overloaded constructor then move asignment
}