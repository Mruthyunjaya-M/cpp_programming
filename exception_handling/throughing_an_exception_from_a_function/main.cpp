#include<iostream>

using namespace std;

double calculate_miles_per_gallon(int miles, int gallons)
{
    if(gallons == 0 )
        throw 534;
    return static_cast<double>(miles)/gallons;
}


int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallons{};

    cout<<"Enter the miles"<<endl;
    cin>>miles;
    cout<<"Enter the gallons"<<endl;
    cin>>gallons;

    try
    {
        miles_per_gallons = calculate_miles_per_gallon(miles, gallons);
        cout<<"Results: "<<miles_per_gallons<<endl;
    }
    catch(int &e)
    {
        std::cerr << "Tried to devide by 0 " << e << endl ;
    }
}