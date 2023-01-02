#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap& src);
	ScavTrap( const ScavTrap& src);
    void attack(const std::string &target);
    ScavTrap(string _name);
    void guardGate();
};

#endif
