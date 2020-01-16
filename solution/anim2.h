// anim.h 
// formatif pratique APP 3 
// GEGI UdS
#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

class	Animal
{
  public: 
    Animal();
    virtual ~Animal();
    string nom;
    virtual void presenter();
    virtual void parler();
    void fairecompagnon(Animal * c);
  private:
    Animal* compagnon;
}; 

class	Mammifere :	public Animal
{
  public: 
    Mammifere();
    ~Mammifere();
    virtual void presenter();
    virtual void parler();
}; 

class	Chat:	public Mammifere
{
  public: 
    void parler();
};

class	Chien:  public Mammifere
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
