#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("default"), hitPoints(10), energyPoints(10), attackDamage(0){
    cout << "Default constructor called" << endl;
}

ClapTrap::ClapTrap(const string _name):name(_name + "clap_name") ,hitPoints(10), energyPoints(10), attackDamage(0){

}
ClapTrap::~ClapTrap(){
    cout << "Destructor called "<< endl;
}

ClapTrap::ClapTrap(const ClapTrap& src){
    cout << "Copy contructor called" << endl;
    *this = src;
}
ClapTrap &ClapTrap::operator=(const ClapTrap& src ){
    cout << "Copy assignment consturctor callled" << endl;
    this->attackDamage = src.attackDamage;
    this->energyPoints = src.energyPoints;
    this->hitPoints = src.hitPoints;
    this->name = src.name;
    return *this;
}

void ClapTrap::setName(string _name){
    this->name = _name;

}
void ClapTrap::setHitPoints( int _hitPoints)
{
    this->hitPoints = _hitPoints;
}
void ClapTrap::setEnergyPoints(int _energyPoints)
{
    this->energyPoints = _energyPoints;
}
void ClapTrap::setAttackDamage(int _attackDamage){
    this->attackDamage = _attackDamage;
}

string ClapTrap::getName() const{

    return this->name;
}
int ClapTrap::getHitPoints() const{

    return this->hitPoints;
}
int ClapTrap::getEnergyPoints() const
{
    return  this->energyPoints;
}
int ClapTrap::getAttackDamage() const
{
    return this->attackDamage;
}

void ClapTrap::attack(const std::string& target){
    if(energyPoints >= 1)
    {
        cout<< "ClapTrap " << getName() << " attacks " << target << ", causing " << attackDamage << " points of damage!" << endl;
        setEnergyPoints(energyPoints - 1);
    }
}
void ClapTrap::takeDamage(unsigned int amount){
    if(hitPoints > 0)
    {
        if(amount > hitPoints)
        {
            cout << "shut down" << endl ;
            setHitPoints(0);
        }
        else
        {
            attackDamage += amount;
            hitPoints -= amount;
            cout << getName() << " has hitPoints " << hitPoints << " amount" << endl;
        }
    }
    else
        cout << getName() << " died" << endl;
}
void ClapTrap::beRepaired(unsigned int amount){
    if(energyPoints >= 1)
    {
        cout<< "ClapTrap " << name<< " repairs yourself " << endl;
        setHitPoints(hitPoints + amount);
        setEnergyPoints(energyPoints - 1);
    }
}