#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<list>

using namespace std;

// Using any vector of integers using range-based for loop
void display(const vector<int> &vec)
{
    cout<<"[ ";
    for(auto &temp_data:vec)
        cout<<temp_data<<" ";
    cout<<" ]"<<endl;
}

void test1()
{
    cout<<endl<<"==========================================="<<endl;
    vector<int> numbers1{1,2,3,4,5};
    auto it = numbers1.begin();           // point to 1st
    cout<<"*it    = "<<*it<<endl;
    cout<<"*it[0] = "<<it[0]<<endl<<endl;

    it++;                                 // point to 2st
    cout<<"*it    = "<<*it<<endl;
    cout<<"*it[0] = "<<it[0]<<endl<<endl;

    it += 2;                              // point to 4st
    cout<<"*it    = "<<*it<<endl;
    cout<<"*it[0] = "<<it[0]<<endl<<endl;

    it -= 2;                              // point to 2st
    cout<<"*it    = "<<*it<<endl;
    cout<<"*it[0] = "<<it[0]<<endl<<endl;

    it = numbers1.end()-1;                    // point to 5 st
    cout<<"*it    = "<<*it<<endl;
    cout<<"*it[0] = "<<it[0]<<endl<<endl;

}

void test2()
{
    cout<<endl<<"==========================================="<<endl;
    // Display all vector elements using an iterator
    vector<int> numbers1{1,2,3,4,5};
    vector<int>::iterator it = numbers1.begin();

    while( it!=numbers1.end() )
    {
        cout<<"*it    = "<<*it<<endl;
        cout<<"*it[0] = "<<it[0]<<endl<<endl;
        it++;
    }

    // Changed all vector elements to 0
    it = numbers1.begin();
    while( it!=numbers1.end() )
    {
        *it = 0;
        it++;
    }
    display(numbers1);

}

void test3()
{
    cout<<endl<<"==========================================="<<endl;
    // Display all vector elements using an iterator
    vector<int> numbers1{1,2,3,4,5};
    vector<int>::const_iterator it = numbers1.begin();
    // auto it = numbers1.cbegin();

    while( it!=numbers1.end() )
    {
        cout<<"*it    = "<<*it++<<endl;
        // cout<<"*it[0] = "<<it[0]<<endl<<endl;
        // it++;
    }

    // Compiler error when we try to change the element
    it = numbers1.begin();
    while( it!=numbers1.end() )
    {
        // *it = 0;   //Compiler error readonly
        it++;
    }
    display(numbers1);

}

void test4()
{
    // more iterator
    // Using a reverse iterator

    vector<int> vec{1,2,3,4,5};
    auto it1 = vec.rbegin();             // Reverse iterator over vector of ints
    while( it1 != vec.rend() )
        cout<<*it1++<<endl;


    // const reverse iterator over a list
    list<string> name{"Larrry", "Moe", "Curly"};
    auto it2 = name.crbegin();                      // Iterator over list of strings point to curly
    cout<<*it2<<endl;
    it2++;                                         // Point to moe
    cout<<*it2<<endl;

    // Iterator over a map
    map<string,string> favorites
    {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };

    auto it3 = favorites.begin();                    // Iterator over map string, string pairs
    while(it3 != favorites.end() )
    {
        cout<<it3->first<<":"<<it3->second<<endl;
        it3++;
    }
}

void test5()
{
    // Iterate over a subset of a conatiner
    vector<int> vec{1,2,3,4,9,6,7,8,9,10};
    auto start = vec.begin()+2;
    auto finish = vec.end()-3;

    while(start <= finish )
        cout<<*start++<<endl;

}

int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    test5();
}