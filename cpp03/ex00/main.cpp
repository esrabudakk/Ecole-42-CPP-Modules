#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap	I("Esra");

	cout << I.getName() << " has got " << I.getHitPoints() << " HIT POINTS, "
		<< I.getEnergyPoints() << " ENERGY POINTS and " << I.getAttackDamage()
		<< " ATTACK DAMAGE" << endl;
	cout << "*********************************************************************"<< endl;

	I.attack("Elif");
	I.takeDamage(7);
	I.beRepaired(4);
	I.takeDamage(1);
	I.beRepaired(8);
	I.takeDamage(12);
	I.takeDamage(2);

	return (0);
}