#include <iostream>

using namespace std;

class Event
{
    string name;
    string monster;
    int hp;
    int exp;
    int player_choice;

public:
    Event(string="Jeffrey", string="Rare Pepe", int=100, int=5000);
    ~Event();
    void show();
    void choice();
};
