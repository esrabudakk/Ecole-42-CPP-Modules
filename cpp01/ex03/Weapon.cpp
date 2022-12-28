#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(string wType)
{
	type = wType;
}
void Weapon::setType(string sType)
{
	type =  sType;
}
const string &Weapon::getType()
{
	return type;
}
