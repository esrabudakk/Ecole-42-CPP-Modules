//
// Created by Esra Budak on 12/30/22.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public  FragTrap, public ScavTrap{
private:
    string name;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(string _name);
    DiamondTrap(const DiamondTrap& src);
    void whoAmI();
    string getDName() const;
    DiamondTrap &operator=( const DiamondTrap &src);

};


std::ostream &operator<<( std::ostream & o, DiamondTrap const & i );
#endif
