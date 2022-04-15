#include<iostream>
#include<string>

using namespace std;

class Player
{
    private:
        string name;
        int health;
        int xp;
    public:
        Player();
        Player(string name);
        Player(string name,int health, int xp);
        string get_name(void);
};


Player::Player()
    :Player{"none",0,0}
{
    cout<<name<<" No arg Constructor"<<endl;
}

Player::Player(string name)
    : Player{name,0,0}
{
    cout<<name<<" String arg Constructor"<<endl;
}

Player::Player(string name, int health, int xp)
    : name(name), health(health), xp(xp)
{
    cout<<name<<" Three arg Constructor"<<endl;
}

int main()
{
    Player Empty;
    Player xyz{"xyz"};
    Player abc{"abc", 100, 55};
}