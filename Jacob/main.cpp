#include <iostream>
#include "Event.h"

using namespace std;

int main()
{
    Event easterEgg;
	//lepiej wygląda i działa w tym przypadku easterEgg1
	//niżej masz wyjaśnienie
	
    easterEgg.ShowResult();
    easterEgg.ChooseAction();

    return 0;
}

//pierwsza rzecz, to takie powiedzmy zasady językowe ogólnie przyjęte w programowaniu 
//nazwy klas zaczynasz z dużej czyli u ciebie jest dobrze Event 
//zmienne w klasie zaczynasz z małej a potem kolejne słowo w zmiennej z dużej czyli 
//eggsCount, ultraMegaClassMenager, isPlayerActive
//nazwy funkcji zaczynasz z dużej np. 
// GetEnemysCount(){} , SetEnemeysCount(){}, InstantiateEnemy(), CreateEnemy
// to taka pierwsza rzecz która pomimo tego że nie znam języka rzuca mi się w oczy 
