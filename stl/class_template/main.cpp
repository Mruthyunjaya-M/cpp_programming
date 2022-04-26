#include<iostream>
#include<string>

using namespace std;

template <typename template_type>
class item
{
    string name;
    template_type value;
    public:
        item(string name, template_type value)
        :name{name}, value{value}
        {
            cout<<"item Args constructor called "<<" "<<this<<" "<<name<<endl;
        }
        ~item()
        {
            cout<<"item desconstructor called "<<" "<<this<<" "<<name<<endl;
        }
        item(const item&source)
        :item{source.name, source.value}
        {
            cout<<"item copy" <<endl;
        }
        string get_name()const
        {
            cout<<"get_name called"<<endl;
            return name;
        }
        template_type get_value()
        {
            cout<<"get_value called"<<endl;
            return value;
        }
};


int main()
{
    item<int> item1{"1", 100 };
    cout<<item1.get_name()<<endl<<item1.get_value()<<endl;

    item<string> item2{"2", "Proffecessor" };
    cout<<item2.get_name()<<endl<<item2.get_value()<<endl;

    item<item<string>>  item3{"3", {"4","Professor"}};
    // item<item<string>>  item3{"3", item2};
    cout<<item3.get_name()<<" Name of 3"<<endl
        <<item3.get_value().get_name()<<" Inside name "<<endl
        <<item3.get_value().get_value()<<endl;
}

// @a Yes, i forgot the copy constructor @apple apple. Now i completely understood.