#include "ClapTrap.hpp"
ClapTrap::ClapTrap(): hitPoints(10), energyPoints(10), attackDamage(0){
    cout << "ClapTrap default constructor called" << endl;
}

ClapTrap::ClapTrap(const string _name): hitPoints(10), energyPoints(10), attackDamage(0){
    cout << "ClapTrap name constructor called" << endl;
    this->name = _name;
}

ClapTrap::~ClapTrap(){
    cout << "ClapTrap destructor called "<< endl;
}

ClapTrap::ClapTrap(const ClapTrap& src){
    cout << "ClapTrap copy constructor called" << endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& src ){
    cout << "ClapTrap copy assignment constructor called" << endl;
    this->attackDamage = src.attackDamage;
    this->energyPoints = src.energyPoints;
    this->hitPoints = src.hitPoints;
    this->name = src.name;
    return *this;
}

void ClapTrap::setName(const string _name){
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

string ClapTrap::getName(){

    return this->name;
}
int ClapTrap::getHitPoints(){

    return this->hitPoints;
}

int ClapTrap::getEnergyPoints()
{
    return  this->energyPoints;
}

int ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}

void ClapTrap::attack(const std::string& target){
    if(energyPoints > 0 && hitPoints > 0 )
    {
        cout<< "ClapTrap " << getName() << " attacks " << target << ", causing " << attackDamage << " points of damage!" << endl;
        setEnergyPoints(energyPoints - 1);
    }
	else
		cout << name << "could not anything." << endl;
}
void ClapTrap::takeDamage(unsigned int amount){
    if(energyPoints > 0 && hitPoints > 0)
    {
        if(amount >= hitPoints)
        {
            cout << amount << " damage was received. " << name << " couldn't stand.(Shut down. Welldone!)" << endl ;
            setHitPoints(0);
        }
        else
        {
			setHitPoints(hitPoints - amount);
            cout <<amount << " damage was received. " << name << " has been damaged and now it has " << hitPoints << " health." << endl;
        }
    }
    else
        cout << name << " could not anything." << endl;
}
void ClapTrap::beRepaired(unsigned int amount){

    if(energyPoints > 0 && hitPoints > 0)
    {
		setHitPoints(hitPoints + amount);
        cout<<amount << " health was received. " << name << " has been repaired and now it has " << hitPoints  << " health." << endl;
        setEnergyPoints(energyPoints - 1);
    }
    else
        cout << name << " could not anything." << endl;
}