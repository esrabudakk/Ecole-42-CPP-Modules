#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    ClapTrap::setHitPoints(100);
    ClapTrap::setAttackDamage(20);
    ClapTrap::setEnergyPoints(50);
	cout << "ScavTrap default constructor called" << endl;
}

ScavTrap::ScavTrap(string _name): ClapTrap(_name)
{
	ClapTrap::setHitPoints(100);
	ClapTrap::setAttackDamage(20);
	ClapTrap::setEnergyPoints(50);
	cout << "ScavTrap name constructor called" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src)
{
	cout << "ScavTrap copy constructor called " << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap destructor called " << endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	cout << "ScavTrap copy assignment operator called " << endl;
	ClapTrap::operator=(src);
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
	{
		cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		cout << getName() << "could not anything." << endl;
}
void ScavTrap::guardGate()
{
	cout << "ScavTrap " << getName() << " has entered Gate keeper mode!" << endl;
}