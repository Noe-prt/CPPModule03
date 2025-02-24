#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Scavvy");
    scav.attack("enemy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();
    return 0;
}