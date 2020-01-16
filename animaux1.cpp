// animaux1.cpp 
// formatif pratique APP 3 
// GEGI UdS
#include <iostream>
#include <string>
using namespace std;

class	Animal
{
  public: 
    Animal();
    ~Animal();
    string nom;
    virtual void presenter();
    virtual void parler();
}; 

class	Chat:	public Animal
{
  public: 
    void parler();
};

class	Chien: public Animal
{
  public:
    void parler();
}; 

class	Oiseau: public Animal
{ 
  public:
    void parler();
};

class	Poisson: public Animal
{
  public:
    void parler();
}; 

void Chat:: parler()
    { cout << "\nMiaou!";}

void Chien:: parler()
    { cout << "\nWouaf-Wouaf!";}

void  Oiseau:: parler()
    { cout << "\nTwit-Twit!";}

void  Poisson:: parler()
    { cout << "\nblub blub!!";}

Animal::Animal()
    { cout<< "\nvoici un Animal " << nom;}

Animal::~Animal()
    { cout<< "\nadieu Animal " << nom;}

void Animal::parler()
    { cout<< "\n..." << "parole de " << nom;}; 

void Animal::presenter()
    { cout<< " Je m'appelle: " << nom;}; 


int main() {
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
//    zoo[4]->fairecompagnon(zoo[1]);    // pour version 2
//    zoo[3]->fairecompagnon(zoo[1]);    // pour version 2

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
