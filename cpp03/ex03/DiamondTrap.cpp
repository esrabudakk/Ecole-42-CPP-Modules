#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

    cout<<"Diamond default constructor called" << endl;
	ClapTrap::setName(this->name + "_clap_name");

}

DiamondTrap::DiamondTrap(string _name) {

    cout<<"Diamond parameter constructor called" << endl;
    this->name = _name;
	ClapTrap::setName(this->name + "_clap_name");
    setAttackDamage(30);
    setEnergyPoints(50);
    setHitPoints(100);

}


DiamondTrap::~DiamondTrap() {

    cout<< "Diamond destructor called" << endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap& src) {

    *this = src;
}

void DiamondTrap::whoAmI() {
    cout << endl << "DiamondTrap's name: " << name << " ClapTrap's name: " << ClapTrap::getName() << endl << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
        name = rhs.getDName();
        setName(rhs.getName());
        setHitPoints(rhs.getHitPoints());
        setEnergyPoints(rhs.getEnergyPoints());
        setAttackDamage(rhs.getAttackDamage());
    return (*this);
}

string DiamondTrap::getDName() const
{
    return  name;
}