#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap	I("IRANZU");

	std::cout << I.getName() << " has got " << I.getHitPoints() << " HIT POINTS, "
		<< I.getEnergyPoints() << " ENERGY POINTS and " << I.getAttackDamage()
		<< " ATTACK DAMAGE" << std::endl;
	
	I.attack("IDOYA");
	I.takeDamage(7);
	I.beRepaired(4);
	I.takeDamage(1);
	I.beRepaired(8);
	I.takeDamage(12);
	I.takeDamage(2);

	return (0);
}


// ClapTrap name constructor called
// IRANZU has got 10 HIT POINTS, 10 ENERGY POINTS and 0 ATTACK DAMAGE
// ClapTrap IRANZU attacks IDOYA causing 0 points of damage
// IRANZU has been damaged and now it has 3 energy points
// IRANZU has been repaired and now it has 7 energy points
// IRANZU has been damaged and now it has 4 energy points
// IRANZU has been repaired and now it has 12 energy points
// IRANZU is dead
// ClapTrap destructor called