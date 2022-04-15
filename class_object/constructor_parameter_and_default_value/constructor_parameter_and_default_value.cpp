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
        Player(string name="none",int health=0, int xp=0);
        string get_name(void);
};


Player::Player(string name, int health, int xp)
    : name(name), health(health), xp(xp)
{
    cout<<name<<" Three arg Constructor"<<endl;
}


int main()
{
    Player empty;
    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player villain{"Villain", 100, 55};

}

