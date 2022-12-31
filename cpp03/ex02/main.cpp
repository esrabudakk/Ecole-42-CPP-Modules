#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main(void)
{
	std::cout << "ClapTrap:" << std::endl;
	
	ClapTrap	I("IRANZU");

	std::cout << I.getName() << " has got " << I.getHitPoints() << " HIT POINTS, "
		<< I.getEnergyPoints() << " ENERGY POINTS and " << I.getAttackDamage()
		<< " ATTACK DAMAGE" << std::endl;

	I.attack("IDOYA");
	I.takeDamage(7);
	I.beRepaired(4);
	I.takeDamage(3);
	I.beRepaired(28);

	std::cout << "ScavTrap:" << std::endl;
	
	ScavTrap	A("AMAYA");

	std::cout << A.getName() << " has got " << A.getHitPoints() << " HIT POINTS, "
		<< A.getEnergyPoints() << " ENERGY POINTS and " << A.getAttackDamage()
		<< " ATTACK DAMAGE" << std::endl;

	A.attack("IDOYA");
	A.takeDamage(7);
	A.beRepaired(4);
	A.takeDamage(3);
	A.beRepaired(8);
	A.guardGate();

	A.attack(I.getName());
	I.takeDamage(A.getAttackDamage());

	std::cout << "FragTrap:" << std::endl;
	
	FragTrap	M("MAITE");

	std::cout << M.getName() << " has got " << M.getHitPoints() << " HIT POINTS, "
		<< M.getEnergyPoints() << " ENERGY POINTS and " << M.getAttackDamage()
		<< " ATTACK DAMAGE" << std::endl;

	M.attack("IDOYA");
	M.takeDamage(7);
	M.beRepaired(4);
	M.takeDamage(3);
	M.beRepaired(8);
	M.highFivesGuys();

	M.attack(A.getName());
	A.takeDamage(M.getAttackDamage());
	return (0);
}
