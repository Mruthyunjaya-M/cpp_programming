#include<iostream>
#include<memory>
#include<vector>

#include"Account.h"
#include"Checking_Account.h"
#include"Trust_Account.h"
#include"Savings_Account.h"

using namespace std;

class Test
{
private:
    int data;
public:
    Test()
    :data{0}
    {
        cout<<"Test No arg constructor (" <<data<<")"<<endl;
    }
    Test(int data)
    :data{data}
    {
        cout<<"Test Single arg constructor (" <<data<<")"<<endl;
    }
    int get_data() const
    {
        cout<<"get_data Test"<<endl;
        return data;
    }
    ~Test()
    {
        cout<<"Test Destructor (" <<data<<")"<<endl;
    }
};

int main()
{
    // Test *t1 = new Test{1000};
    // delete t1;

    // unique_ptr<Test>t1{new Test{1000}};

    // unique_ptr<Test>t2 = make_unique<Test>(150);
    // unique_ptr<Test>t3;
    // // t3 = t2;
    // t3 = move(t2);
    // if(t2==nullptr)
    //     cout<<"t1 is null pointer"<<endl;

    unique_ptr<Account> a1 = make_unique<Checking_Account>("Moe", 5000);
    a1->deposit(1000);
    cout<<*a1<<endl;

    return 0;
}