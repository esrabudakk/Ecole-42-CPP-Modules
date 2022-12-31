#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	setHitPoints(100);
	setAttackDamage(30);
	setEnergyPoints(100);
	cout << "FragTrap default constructor called" << endl;
}

FragTrap::FragTrap(string _name)
{
	setName(_name);
	setHitPoints(100);
	setAttackDamage(30);
	setEnergyPoints(100);
	cout << "FragTrap parameter constructor called" << endl;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap destructor called " << endl;
}
FragTrap::FragTrap(const FragTrap& src): ClapTrap(src)
{
	*this = src;
}
	

 FragTrap &FragTrap::operator=(const FragTrap& src)
 {
	*this = src;
	return *this;
 }

void FragTrap::highFivesGuys(void)
{
	cout << getName() << " high five to everyone :)" << endl;
}

