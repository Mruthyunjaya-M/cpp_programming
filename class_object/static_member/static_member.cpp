#include<iostream>
#include"static_member.h"

using namespace std;

int Player::num_player{0};

Player::Player(std::string name, int health, int xp)
:name(name),health(health),xp(xp)
{
    ++num_player;
    std::cout<<"3 Args constructor"<<endl;
}

Player::Player(const Player & source )
:Player{source.name,source.health,source.xp}
{
    std::cout<<"Copy constructor"<<endl;
}

Player::~Player()
{
    --num_player;
    std::cout<<"Destructor is called"<<endl;    
}

int Player::get_num_player()
{
    return num_player;
}

