#include<iostream>
#include<string>

using namespace std;

class Deep
{
    private:
        int *data;
    public:
        void set_data_value(int d){
            *data = d;
        }
        int get_data_value(void){
            return *data;
        }

        // Constructor
        Deep(int d);

        // Copy constructor
        Deep(const Deep &source);
        
        // Destructor
        ~Deep();
};

Deep::Deep(int d)
{
    data = new int{d};
    // data = new int;
    // *data = d;
    cout<<"Constructor calld"<<endl;
}

Deep::Deep(const Deep &source )
{
    data = new int(*source.data);
    // data = new int;
    // *data = source.data
    cout<<"Deep Copy Constructor callde"<<endl;
}

Deep::~Deep()
{
    delete data;
    cout<<"Destructor called"<<endl;
}

void display_deep(Deep s)
{
    cout<<s.get_data_value()<<endl;
}

int main()
{
    Deep obj1{100};
    display_deep(obj1);

    Deep obj2{obj1};

}