#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    setHitPoints(100);
    setAttackDamage(20);
    setEnergyPoints(50);
    cout << "ScavTrap default constructor called" << endl;


}
ScavTrap::ScavTrap(string _name) {
    setHitPoints(100);
    setAttackDamage(20);
    setEnergyPoints(50);
    this->setName(_name);
    cout << "ScavTrap parameter constructor called" << endl;

}

ScavTrap::~ScavTrap() {
    cout << "ScavTrap destructor called "<< endl;

}

void ScavTrap::attack(const std::string &target) {
    if(getEnergyPoints() >= 1)
    {
        cout<< "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }


}
void ScavTrap::guardGate() {
    cout << "ScavTrap " <<getName() << " has entered Gate keeper mode!" << endl;
}