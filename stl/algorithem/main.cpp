#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<cctype>

using namespace std;

class person
{
    string name;
    int age;
public:
    person() = default;
    person(string name, int age)
    :name{name},age{age}
    {
        cout<<"2 Args constructor"<<endl;
    }
    bool operator<(const person &rhs)
    {
        return this->age < rhs.age;
    }
    bool operator==(const person &rhs)
    {
        return (this->name==rhs.name) && (this->age==rhs.age) ;
    }

};

// Find the element in the container
void find_test()
{
    cout<<endl<<"===================================="<<endl;
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};

    vector<int>::iterator loc = find(begin(vec), end(vec), 549 );
    // auto loc = find( begin(vec),end(vec), 8) ;

    cout<<"vec[7]   = "<<vec[7]<<endl;
    cout<<"loc[0]   = "<<loc[0]<<endl;
    // cout<<"loc      = "<<loc<<endl;
    cout<<"&vec[7]  = "<<&vec[7]<<endl;
    cout<<"&loc[0]  = "<<&loc[0]<<endl;
    cout<<"&loc     = "<<&loc<<endl;

    if(loc != end(vec))
        cout<<"Found the number "<<*loc<<endl;
    else
        cout<<"Couldn't find the number"<<endl;

    cout<<endl<<"===================================="<<endl;

    list<person> players
    {
        {"Larry", 18 },
        {"Meo", 20 },
        {"Curly", 21 }
    };

    auto loc1 = find( players.begin(), players.end(), person{"Meo", 21} );

    if(loc1 != players.end() )
        cout<<"Found meo"<<endl;
    else
        cout<<"Meo not Found"<<endl;

    cout<<endl<<"===================================="<<endl;

}

void count_test()
{
    cout<<endl<<"===================================="<<endl;

    vector<int> vec{1,8,3,8,5,8,7,8,9,10};

    int num = count(vec.begin(), vec.end(), 45 );
    cout<<"Occurance found "<<num<<endl;

}

void count_if_test()
{
    cout<<endl<<"===================================="<<endl;

    // Count only if the elements is even
    vector<int> vec{1,1,1,4,5,6,7,8,9,10};
    int num = count_if(vec.begin(), vec.end(), [](int x){return x%2 == 0;});
    cout<<num<<" Even numbers found"<<endl;

    num = count_if(vec.begin(), vec.end(), [](int x){return x%2 != 0;});
    cout<<num<<" Odd numbers found"<<endl;

    num = count_if(vec.begin(), vec.end(), [](int x){return x>=8;});
    cout<<num<<" Numbers are greater than 5"<<endl;

}

void replace_test()
{
    cout<<endl<<"===================================="<<endl;
    vector<int> vec{1,2,3,4,1,6,7,1,9,10};
    for(auto i:vec)
        cout<<i<<" ";
    cout<<endl;

    replace(vec.begin(), vec.end(), 1, 100);

    for(auto i:vec)
        cout<<i<<" ";
    cout<<endl;

}

void all_of_test()
{
    cout<<endl<<"===================================="<<endl;
    vector<int> vec{1,3,5,7,9,1,3,13,19,5};
    if( all_of(vec.begin(), vec.end(), [](int x) {return x>20;}))
    {
        cout<<"All the elements are > 10"<<endl;
    }
    else
    {
        cout<<"Not all the elements are > 10"<<endl;
    }

    if( all_of(vec.begin(), vec.end(), [](int x) {return x<20;}))
    {
        cout<<"All the elements are < 10"<<endl;
    }
    else
    {
        cout<<"Not all the elements are < 10"<<endl;
    }


}

void string_transform_test()
{
    cout<<endl<<"===================================="<<endl;
    string str1{"This is test"};
    cout<<"Before transform: "<<str1<<endl;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout<<"After transform: "<<str1<<endl;

}

int main()
{
    // find_test();
    // count_test();
    // count_if_test();
    // replace_test();
    // all_of_test();
    string_transform_test();
}