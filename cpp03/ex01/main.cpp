#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{

    ClapTrap a(ClapTrap("Ahmet"));
    ClapTrap b;

    b = a;


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

    return (0);
}