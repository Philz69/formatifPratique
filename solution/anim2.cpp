// animaux2.cpp 
// formatif pratique APP 3 
// GEGI UdS
#include <iostream>
#include <string>
using namespace std;

#include "anim2.h"

void Chat:: parler()
    { cout << "\nMiaou!";}

void Chien:: parler()
    { cout << "\nWouaf-Wouaf!";}

void  Oiseau:: parler()
    { cout << "\nTwit-Twit!";}

void  Poisson:: parler()
    { cout << "\nblub blub!!";}


Animal::Animal()
    {
    cout<< "\nvoici un Animal " << nom;
    compagnon = NULL;}

Animal::~Animal()
    { cout<< "\nadieu Animal " << nom;}

void Animal::parler()
    { cout<< "\n..." << "parole de " << nom;}; 

void Animal::presenter()
    { cout<< "\nJe m'appelle: " << nom;
      if (compagnon != NULL)
      cout << "\nmon compagnon est: " << compagnon->nom;}

void Animal::fairecompagnon(Animal * c)
    { cout << "\nfaire compagnon ";
      cout << nom << " avec ...";
      if (c == NULL)
          cout << "\nimpossible, le compagnon non defini";
      else
      compagnon = c;;
      cout << c->nom ;
    return;
    }

Mammifere::Mammifere()
    { cout<< "\nvoici un Mammifere " << nom;}; 

Mammifere::~Mammifere()
    { cout<< "\nadieu Mammifere " << nom;}; 

void Mammifere::presenter()
    { cout<< "\nJe suis " << nom;
      Animal::presenter();}

void Mammifere::parler()
    { cout<< "\nJe dis " << nom;}; 

