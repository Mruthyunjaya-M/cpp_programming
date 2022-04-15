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
        string get_name(void) { return name; }
        int get_health(void) { return health; }
        int get_xp(void) { return xp; }
        Player(string name="None", int health=0, int xp=0);
        
        // Copy constructor
        Player(const Player &source );

        // Destructor
        ~Player(){ cout<<"Desctructor called for: "<<name<<endl;}
};

Player::Player(string name, int health, int xp)
    :name(name), health(health), xp(xp)
    {
        cout << "Three args Constructor"<< endl;
    }

Player::Player(const Player & source)
    // Initilizer list to initilize the object.
    // :name(source.name), health(source.health), xp(source.xp).
    // Using delegating constructor.
    :Player{source.name,source.health, source.xp}
    {
        cout<<"Copy constructor - made copy of: "<< source.name << endl;
    }

void display_player(Player p) {
    cout<< "Name: " << p.get_name() << endl;
    cout<< "Health: " << p.get_health() << endl;
    cout<< "XP: " << p.get_xp() << endl; 
}

int main()
{

    // Player empty;
    // Player xyz{"xyz"};
    // Player abc{"abc", 100 };
    Player qwe{"qwe", 432, 75 };
    display_player(qwe);
    cout<<"After display_player"<<endl;

    return 0;
}

