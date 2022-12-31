#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
private:
    string name;
   unsigned int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const ClapTrap& src);
    ClapTrap &operator=(const ClapTrap& src);
    ClapTrap(const string _name);

    void setName( string _name);
    void setHitPoints( int _hitPoints);
    void setEnergyPoints( int _energyPoints);
    void setAttackDamage( int _attackDamage);

    string getName();
    int getHitPoints();
    int getEnergyPoints();
    int getAttackDamage();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif