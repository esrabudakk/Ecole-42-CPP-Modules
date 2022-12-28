#include "HumanB.hpp"

HumanB::HumanB(string name)
{
	weapon = NULL;
	setName(name);
}


void HumanB::setWeapon(Weapon &sWeapon)
{
	weapon = &sWeapon;
}

string HumanB::getWeapon()
{
	return name;
}

void HumanB::setName(string sName)
{
	name = sName;
}

string HumanB::getName()
{
	return name;
}

void HumanB::attack()
{
	if(weapon != NULL)
		cout << name << " attacks with their " << weapon->getType() << endl;
}