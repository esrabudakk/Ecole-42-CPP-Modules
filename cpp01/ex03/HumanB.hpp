#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
using std::cout;
using std::endl;
using std::string;

class HumanB
{
private:
	string name;
	Weapon *weapon;
public:
	HumanB(string name);
	void attack();
	string getName();
	void setName(string sName);
	string getWeapon();
	void setWeapon(Weapon &sWeapon);

};

#endif