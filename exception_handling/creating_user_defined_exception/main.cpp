#include<iostream>

using namespace std;

class devide_by_zero_exception
{
    public:
        devide_by_zero_exception()
        {
            cout<<"devide_by_zero_exception Constructor called"<<endl;
        }
        ~devide_by_zero_exception()
        {
            cout<<"devide_by_zero_exception Destructor called"<<endl;
        }
};

class negetavive_value_expression
{
    public:
        negetavive_value_expression()
        {
            cout<<"negetavive_value_expression Constructor called"<<endl;
        }
        ~negetavive_value_expression()
        {
            cout<<"negetavive_value_expression Destructor called"<<endl;
        }
};


double calculate_miles_per_gallon(int miles, int gallons)
{
    if(gallons == 0 )
        throw devide_by_zero_exception();
    if(miles < 0 || gallons < 0 )
        throw negetavive_value_expression();
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
    catch(const devide_by_zero_exception &ex)
    {
        std::cerr<<"Sorry you can't devide by 0"<< endl ;
    }
    catch(const negetavive_value_expression &ex)
    {
        std::cerr<<"Sorry one of your parameter is negetive"<< endl ;
    }

    cout<<"End of program"<<endl;
}