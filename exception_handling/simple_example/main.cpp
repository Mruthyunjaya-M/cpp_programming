#include<iostream>

using namespace std;

int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallons{};

    cout<<"Enter the miles"<<endl;
    cin>>miles;
    cout<<"Enter the gallons"<<endl;
    cin>>gallons;

    // miles_per_gallons = miles/gallons;
    // if( gallons != 0 )
    // {
    //     miles_per_gallons = static_cast<double>(miles)/gallons;
    //     cout<<"Result: "<<miles_per_gallons<<endl;
    // }
    // else
    // {
    //     cerr<<"Sorry, can't devided by zero"<<endl;
    // }
    try
    {
        if(gallons == 0)
            throw 567;
        miles_per_gallons = static_cast<double>(miles)/gallons;
        cout<<"Result: "<<miles_per_gallons<<endl;
    }
    catch(int &ex)
    {
        cerr<<"Sorry you can't devide by 0 throwed value = "<<ex<<endl;
    }
}