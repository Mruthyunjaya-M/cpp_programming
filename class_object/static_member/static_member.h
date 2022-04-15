#ifndef _PLAYER_H_
#define _PLAYER_H_
#include<iostream>
#include<string>

using namespace std;

class Player
{
    private:
        static int num_player;
        std::string name;
        int health;
        int xp;
    public:
        std::string get_name(){return name;}
        int get_health(){return health;}
        int het_xp(){return xp;}
        
        //Constructor
        Player(std::string name="None", int health=0, int xp=0);

        //Copy constructor
        Player(const Player &source);

        //Destructor
        ~Player();

        static int get_num_player();

};

#endif //PLAYER
