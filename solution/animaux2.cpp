// animaux2.cpp 
// formatif pratique APP 3 
// GEGI UdS
#include <iostream>
#include <string>
using namespace std;

#include "anim2.h"

int main()
{
    Animal * zoo[5];
    zoo[0] = new Chat();
    zoo[0]->nom = "Sylvester";
    zoo[1] = new Animal();
    zoo[1]->nom  = "Milou";
    zoo[2] = new Oiseau();
    zoo[2]->nom = "Tweety";
    zoo[3] = new Poisson();
    zoo[3]->nom = "Nemo";
    zoo[4] = new Chien();
    zoo[4]->nom = "Snoopy";
    zoo[4]->fairecompagnon(zoo[1]);
    zoo[3]->fairecompagnon(zoo[1]);

    for (int i = 0; i < 5; i++)
    {      
        zoo[i]->parler();    
        zoo[i]->presenter(); 
    };

    for (int k = 0; k < 5; k++)
    {      
        delete zoo[k];
    }
    cout<< "\nfin\n";
    return 0;
}
