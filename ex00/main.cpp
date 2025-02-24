#include "ClapTrap.hpp"

int main()
{
    ClapTrap bender("Bender");
    ClapTrap leela("Leela");

    std::cout << "\n--- Début du combat ---\n" << std::endl;
    bender.attack("Leela");
    leela.takeDamage(bender.getAttackDamage());
    leela.attack("Bender");
    bender.takeDamage(leela.getAttackDamage());
    std::cout << "\n--- Leela essaie de se réparer ---\n" << std::endl;
    leela.beRepaired(5);
    std::cout << "\n--- Bender attaque jusqu'à épuisement d'énergie ---\n" << std::endl;
    for (int i = 0; i < 12; i++)
    {
        bender.attack("Leela");
    }
    std::cout << "\n--- Leela finit Bender ---\n" << std::endl;
    leela.attack("Bender");
    bender.takeDamage(20);
    std::cout << "\n--- Bender essaie d'attaquer mais il est KO ---\n" << std::endl;
    bender.attack("Leela");
    std::cout << "\n--- Fin du combat ---\n" << std::endl;
    return 0;
}