#include "ScavTrap.hpp"

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap " << _name << " has been copied!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
    if (this != &assign)
    {
        ClapTrap::operator=(assign);
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " is dead and can't attack!" << std::endl;
        return;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " has no energy left to attack!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _name << " fiercely attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
}
