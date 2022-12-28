#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon)
{
	setName(name);
	setWeapon(weapon);
}

void HumanA::setWeapon(Weapon &sWeapon)
{
	weapon = &sWeapon;
}

string HumanA::getWeapon()
{
	return name;
}
void HumanA::setName(string sName)
{
	name = sName;
}

string HumanA::getName()
{
	return name;
}

void HumanA::attack()
{
	cout << name << " attacks with their " << weapon->getType()<< endl;
}