#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    setHitPoints(100);
    setAttackDamage(30);
    setEnergyPoints(100);
    cout << "FragTrap default constructor called" << endl;
}

FragTrap::FragTrap(string _name):ClapTrap(_name)
{
    setName(_name);
    setHitPoints(100);
    setAttackDamage(30);
    setEnergyPoints(100);
    cout << "FragTrap name constructor called" << endl;
}

FragTrap::~FragTrap()
{
    cout << "FragTrap destructor called " << endl;

}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
    *this = src;
}

FragTrap &FragTrap::operator=(const FragTrap& src)
{
    cout << "FragTrap copy assignment operator called " << endl;
    ClapTrap::operator=(src);
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    if (getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
    else
        cout << getName() << "could not anything." << endl;
}
void FragTrap::highFivesGuys(void)
{
    cout << getName() << " high five to everyone :)" << endl;
}

