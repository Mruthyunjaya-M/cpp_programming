#include<cstring>
#include<iostream>
#include"my_string.h"

// No arg constructor
Mystring::Mystring()
:str{nullptr}
{
    str = new char[1];
    *str = '\0';
    std::cout<<"Default condtructor"<<std::endl;
}

// Over loaded constructor
Mystring::Mystring(const char *s)
:str{nullptr}
{
    if(s==nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
    std::cout<<"Over loaded constructor"<<std::endl;
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
:Mystring{source.str}
// :str{nullptr}
{
    // str = new char[std::strlen(source.str)+1];
    // std::strcpy(str,source.str);
    std::cout<<"Copy constructor used"<<std::endl;
}

// Move constructor
Mystring::Mystring(Mystring &&source)
:str(source.str)
{
    source.str = nullptr;
    std::cout<<"Move constructor used"<<std::endl;
}

// Destructor
Mystring::~Mystring()
{
    delete []str;
    std::cout<<"Destructor"<<std::endl;
}

// Copy assignment
Mystring& Mystring::operator=(const Mystring &rhs)
{
    std::cout<<"Copy assignment"<<std::endl;
    if(this == &rhs)
    {
        return *this;
    }
    else
    {
        if( str != nullptr)
        delete [] str;
        str = new char[std::strlen(rhs.str)+1];
        std::strcpy(str,rhs.str);
        return *this;
    }
}

// Move assignment
Mystring& Mystring::operator=(Mystring &&rhs)
{
    std::cout<<"Move assignment"<<std::endl;
    if(this == &rhs)
    {
        return *this;
    }
    else
    {
        if( str != nullptr)
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr ;
        return *this;
    }
}


// Dsiplay method
void Mystring::display()const
{
    std::cout<<str<<" : "<<get_length()<<std::endl;
    std::cout<<"Mystring::display"<<std::endl;
}

// Length getter
int Mystring::get_length()const
{
    return std::strlen(str);
    std::cout<<"Mystring::get_length"<<std::endl;
}

// String getter
const char* Mystring::get_str()const
{
    return str;
    std::cout<<"Mystring::get_str"<<std::endl;
}

