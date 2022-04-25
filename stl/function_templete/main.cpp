#include<iostream>
#include<string>

using namespace std;

template <typename fun_template>
fun_template find_min_val(fun_template arg1, fun_template arg2)
{
    return (arg1<arg2)?arg1:arg2;
}

template <typename type1, typename type2>
void func(type1 a, type2 b)
{
    cout<<"a = "<<a<<"b = " <<b<<endl;
}

struct Person
{
    string name;
    int age;
    bool operator<(const Person &obj)const
    {
        return this->age < obj.age;
    }
};

ostream& operator<<(ostream &ios, const Person &p)
{
    ios<<"Person name "<<p.name<<" Person age = "<<p.age<<endl;
    return ios;
}

int main()
{
    Person p1{"Curly", 15 };
    Person p2{"Moe", 30 };
    Person p3 = find_min_val(p1,p2);
    cout<<p3.name<<" is younger"<<endl;

    func(p1,p2);

    // cout<<find_min_val<int>(2,3)<<endl;
    // cout<<find_min_val(2,3)<<endl;
    // cout<<find_min_val('A', 'B')<<endl;
    // cout<<find_min_val(12.5,9.2)<<endl;
    // cout<<find_min_val(5+2*2,7+40)<<endl;


    // func<int>(10,20);
    // func(10,20);
    // func<char,double>('A',12.4);
    // func(1000, "Testing" );
    // func(2000, string{"Testing"});

}
