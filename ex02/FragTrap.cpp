#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap " << _name << " has been copied!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
    if (this != &assign)
    {
        ClapTrap::operator=(assign);
    }
    std::cout << "FragTrap " << _name << " has been assigned!" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "FragTrap " << _name << " fiercely attacks " << target
                  << ", dealing " << _attackDamage << " damage!" << std::endl;
        _energyPoints--;
    }
    else
        std::cout << "FragTrap " << _name << " is too weak to attack!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " requests a high five! ✋" << std::endl;
}
