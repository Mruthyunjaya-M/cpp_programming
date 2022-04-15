#include<iostream>
#include<string>

using namespace std;

class Player{
    private:
        string name;
        int health;
        int xp;
    
    public:
    void set_name(string name_val){name = name_val;};

    Player(){
        cout<<"No argument constructor called"<<endl;
    }

    Player( string name){
        cout<<"string name argument constructor called"<<endl;
    }

    Player( string name,int health, int xp){
        cout<<"string name,int health, int xp argument constructor called"<<endl;
    }

    ~Player(){
        cout<<"Destructor called "<<name<<endl;
    }

};

int main()
{
    {
        Player plays;
        plays.set_name("Slayer");
    }

    {
        Player xyz;
        xyz.set_name("xyz");

        Player abc("abc");
        abc.set_name("abc changed");

        Player qwerty("qwerty", 100, 12 );
        qwerty.set_name("qwerty changed");

    }

    cout<<endl<<endl;
    Player *dynamic1{nullptr};
    dynamic1 = new Player;
    dynamic1->set_name("Dynamic 1");

    Player *dynamic2 = new Player("Dynamic 2", 100, 300);
    dynamic2->set_name("Dynamic 2 changed");

    delete dynamic1;
    delete dynamic2;

}