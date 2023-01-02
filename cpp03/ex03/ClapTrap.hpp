#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
protected:
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

    string getName() const;
    int getHitPoints()const;
    int getEnergyPoints()const;
    int getAttackDamage()const;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif