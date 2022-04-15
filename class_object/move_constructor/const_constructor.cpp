#include<iostream>
#include<string>
#include<vector>


using namespace std;

class Data
{
    private:
        int data;
    public:
        void set_data_value(int d){
            data = d;
        }
        int get_data_value(void)const{
            return data;
        }
        Data(int data);
};

Data::Data(int data)
:data{data}
{
    cout<<"Paramater Constructor"<<endl;
}

void display_player_name(const Data &d)
{
    cout<<"Data = from display_player_name ="<< d.get_data_value() << endl;
}


int main()
{
    const Data new_data{100};
    cout<<"Data = "<< new_data.get_data_value() << endl;
    display_player_name(new_data);
}
