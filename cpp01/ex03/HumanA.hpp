#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
using std::cout;
using std::endl;
using std::string;

class HumanA
{
private:
	string name;
	Weapon *weapon;
public:
	HumanA(string name, Weapon &weapon);
	void attack();
	string getName();
	void setName(string sName);
	string getWeapon();
	void setWeapon(Weapon &sWeapon);
};

#endif