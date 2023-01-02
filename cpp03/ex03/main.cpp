#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
int main(void)
{
        ClapTrap	I("Esra");

        cout << I.getName() << " has got " << I.getHitPoints() << " HIT POINTS, "
             << I.getEnergyPoints() << " ENERGY POINTS and " << I.getAttackDamage()
             << " ATTACK DAMAGE" << endl;

        I.attack("Elif");
        I.takeDamage(7);
        I.beRepaired(4);
        I.takeDamage(1);
        I.beRepaired(8);
        I.takeDamage(12);
        I.takeDamage(2);

        cout << "*********************************************************************"<< endl;

        ScavTrap	S("Esra");
        cout << S.getName() << " has got " << S.getHitPoints() << " HIT POINTS, "
             << S.getEnergyPoints() << " ENERGY POINTS and " << S.getAttackDamage()
             << " ATTACK DAMAGE" << endl;

        S.attack("Elif");
        S.takeDamage(7);
        S.beRepaired(4);
        S.takeDamage(1);
        S.beRepaired(8);
        S.takeDamage(12);
        S.takeDamage(2);
        S.guardGate();
        cout << "*********************************************************************"<< endl;

        FragTrap	F("Esra");
        cout << F.getName() << " has got " << F.getHitPoints() << " HIT POINTS, "
             << F.getEnergyPoints() << " ENERGY POINTS and " << F.getAttackDamage()
             << " ATTACK DAMAGE" << endl;

        F.attack("Elif");
        F.takeDamage(7);
        F.beRepaired(4);
        F.takeDamage(1);
        F.beRepaired(8);
        F.takeDamage(12);
        F.takeDamage(2);
        F.highFivesGuys();

    cout << "*********************************************************************"<< endl;

    std::cout << "DiamondTrap:" << std::endl;
	
	DiamondTrap	C("Esra");

	std::cout << C.getName() << " has got " << C.getHitPoints() << " HIT POINTS, "
		<< C.getEnergyPoints() << " ENERGY POINTS and " << C.getAttackDamage()
		<< " ATTACK DAMAGE" << std::endl;

	C.attack("Elif");
	C.takeDamage(6);
	C.beRepaired(4);
	C.takeDamage(3);
	C.guardGate();
	C.highFivesGuys();
	C.whoAmI();
	C.beRepaired(8);
	C.takeDamage(17);

	return (0);
}
