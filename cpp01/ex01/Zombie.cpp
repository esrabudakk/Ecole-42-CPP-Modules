#include "Zombie.hpp"

void Zombie::setName(string sName)
{
	name =  sName;
}

Zombie::Zombie()
{	
	cout<< "Zombie created." << endl;
}
void Zombie::announce()
{
	cout << name <<  " Brainzz..." << endl;
}
Zombie::~Zombie()
{
	cout << name << " is died." << endl;
}	
