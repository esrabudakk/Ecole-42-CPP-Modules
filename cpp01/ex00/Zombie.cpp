#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(string name)
{
	setName(name);
	cout << name << " is created." << std::endl;
}

void Zombie::setName(string sName)
{
	name = sName;
}

string Zombie::getName()
{
	return name;
}
Zombie::~Zombie()
{
	cout << name << " is died." << std::endl;
}

void Zombie::announce()
{
	cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
