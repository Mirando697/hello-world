#include <iostream>
#include "Event.h"

using namespace std;

void Event::show()
{
    cout<<endl<<"You encountered "<<monster<<" called "<<name<<endl;
    cout<<"HP: "<<hp<<endl;
}

void Event::choice()
{
    //int choice;
    cout<<"What you want to do?"<<endl;
    cout<<"1.Run"<<endl;
    cout<<"2.Fight"<<endl;

    while(player_choice!=1||2)
    {
        cin>>player_choice;
        if(player_choice==1)
        {
            cout<<"You successfully ran away"<<endl;
            break;
        }
        else if(player_choice==2)
        {
            cout<<"You decide to attack!"<<endl;
            cout<<"You strike critticaly for 99999 DMG!"<<endl;
            cout<<monster<<" named "<<name<<" has died!"<<endl;
            cout<<"Exp acquired: "<<exp<<endl;
            break;
        }
        else cout<<"You choosed wrong option! Try again :)"<<endl;
    }
}
Event::Event(string n,string m,int h,int e)
{
    name=n;
    monster=m;
    hp=h;
    e=exp;
}

Event::~Event()
{
    cout<<endl<<"Dekonstruktor dziala"<<endl;
}
