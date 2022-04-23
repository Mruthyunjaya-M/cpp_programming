#include<iostream>

using namespace std;

void fun2(void)
{
    cout<<"Starting fun2"<<endl;
    throw 0;
    cout<<"Ending fun2"<<endl;
}
void fun1(void)
{
    cout<<"Starting fun1"<<endl;
    try
    {
        fun2();
    }
    catch(int &e)
    {
        cerr<<"Cought error in fun1"<<endl;
    }
    cout<<"Ending fun1"<<endl;
}
void fun(void)
{
    cout<<"Starting fun"<<endl;
    fun1();
    cout<<"Ending fun"<<endl;
}

int main()
{

    cout<<"Starting main"<<endl;
    try
    {
        fun();
    }
    catch(int &catct_val)
    {
        cerr<<"Cought error in main"<<endl;
    }

    cout<<"End of program"<<endl;

}