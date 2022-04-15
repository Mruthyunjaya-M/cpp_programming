#include<iostream>
#include"static_member.h"

using namespace std;

void display_active_player()
{
    cout<<"Active player: "<<Player::get_num_player()<<endl;
}


int main()
{
    display_active_player();
    Player xyx{"xyz"};
    display_active_player();
    return 0;
}
