#include<iostream>
#include<string>

using namespace std;
template <typename T,int N>
class my_array
{
    int size{N};                  // How do we know N????
    T values[N];                // the N needs ar compile time!
    friend ostream& operator<<(ostream &os, const my_array<T,N> &arr)
    {
        os<<"[ ";
        for(auto &temp_val:arr.values)
            os<<temp_val<<" ";
        os<<" ]"<<endl;
        return os;
    }
public:
    my_array()=default;
    my_array(T init_val)
    {
        for(auto &item:values)
            item = init_val;
    }
    void fill(int init_val)
    {
        for(auto &item:values)
            item = init_val;
    }
    int get_size(void)const
    {
        return size;
    }
    // Overloaded subscript operator for easy use
    T& operator[](int index)
    {
        return values[index];
    }
};


int main()
{
    my_array<int,5> nums;
    cout<<"The size of nums is "<<nums.get_size()<<endl;
    cout<<nums<<endl;

    nums.fill(0);
    cout<<"The size of nums is "<<nums.get_size()<<endl;
    cout<<nums<<endl;

    nums.fill(546);
    cout<<"The size of nums is "<<nums.get_size()<<endl;
    cout<<nums<<endl;

    nums[0] = 1000;
    nums[3] = 4000;
    cout<<nums<<endl;

    my_array<int,100> nums2{1};
    cout<<"The size of nums is"<<nums2.get_size()<<endl;
    cout<<nums2<<endl;

    my_array<string,10> strings{string{"C++"}};
    cout<<"The size of strings is"<<strings.get_size()<<endl;
    cout<<strings<<endl;

    strings[0] = string{"Changed"};
    cout<<strings<<endl;

}
