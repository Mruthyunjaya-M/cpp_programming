#include<iostream>
#include<string>

using namespace std;

template <typename template_type>
class item
{
    string name;
    template_type value;
    
    public:
    item(string name, template_type value):name{name}, value{value}
    {
        cout<<"item Args constructor called "<<name<<endl;
    }
    item(const item&source)
    :item{source.name, source.value}
    {
        cout<<"item copy" <<endl;
    }
    ~item()
    {
        cout<<"item desconstructor called "<<name<<endl;
    }
};

void foo(item<int> i)
{
    cout<<"Inside foo"<<endl;
}

int main()
{
    item<int> item1{"1", 100 };
    foo(item1);
}

