#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n=== Création des robots ===\n";
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy");
    FragTrap frag("Fraggy");

    std::cout << "\n=== Attaques ===\n";
    clap.attack("Bandit");
    scav.attack("Raider");
    frag.attack("Boss");

    std::cout << "\n=== Capacités spéciales ===\n";
    scav.guardGate();
    frag.highFivesGuys();

    std::cout << "\n=== Destruction des robots ===\n";
    return 0;
}