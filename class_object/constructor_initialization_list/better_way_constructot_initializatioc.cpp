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

string Player::get_name(void)
{
    return name;
}

#if 0
Player::Player()
{
    name="none";
    health=0;
    xp=0;
}

Player::Player(string name)
{
    Player::name = name;
    // name = name_val;
    health = 0;
    xp = 0;
}

Player::Player(string name, int health, int xp)
{
    Player::name = name;
    Player::health = health;
    Player::xp = xp;
    // name = name_val;
    // health = health_val;
    // xp = xp_val;
}
#endif

Player::Player()
    : name{"none"}, health{0}, xp{0}
{
    cout<<"No arg Constructor"<<endl;
}

Player::Player(string name)
    : name(name), health(0), xp(0)
    // : name{name_val}, health{0}, xp{0}
{
    cout<<"String arg Constructor"<<endl;
}

Player::Player(string name, int health, int xp)
// Player::Player(string name_val, int health_val, int xp_val)
    : name(name), health(health), xp(xp)
    // : name{name_val}, health{health_val}, xp{xp_val}
{
    cout<<"Three arg Constructor"<<endl;
}


int main()
{
    Player empty;
    Player abc{"abc"};
    Player xyz{"xyz", 100, 55};

    cout<<"Name = " <<empty.get_name() << endl;
    cout<<"Name = " <<abc.get_name() << endl;
    cout<<"Name = " <<xyz.get_name() << endl;

}