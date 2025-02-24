#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) 
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) 
    : _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
    std::cout << "ClapTrap " << _name << " has been copied!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, int hitPoints, int energyPoints, int attackDamage) 
    : _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
    std::cout << "ClapTrap " << _name << " has been created with custom stats!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& assign) {
    if (this != &assign)
    {
        _hitPoints = assign._hitPoints;
        _energyPoints = assign._energyPoints;
        _attackDamage = assign._attackDamage;
    }
    return *this;
}

const std::string& ClapTrap::getName() const { return _name; }
int ClapTrap::getHitPoints() const { return _hitPoints; }
int ClapTrap::getEnergyPoints() const { return _energyPoints; }
int ClapTrap::getAttackDamage() const { return _attackDamage; }

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0)
	{
        std::cout << "ClapTrap " << _name << " is dead and can't attack!" << std::endl;
        return;
    }
    if (_energyPoints <= 0)
	{
        std::cout << "ClapTrap " << _name << " has no energy left to attack!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target 
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
	{
        std::cout << "ClapTrap " << _name << " is already dead and can't take more damage!" << std::endl;
        return;
    }
    _hitPoints -= amount;
    if (_hitPoints <= 0)
	{
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " has taken " << amount 
                  << " damage and has been destroyed!" << std::endl;
    }
	else
	{
        std::cout << "ClapTrap " << _name << " has taken " << amount 
                  << " damage and now has " << _hitPoints << " hit points left!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " is dead and can't be repaired!" << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " has no energy left to repair itself!" << std::endl;
        return;
    }
    _hitPoints += amount;
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " repairs itself, gaining " 
              << amount << " hit points, now at " << _hitPoints << " HP!" << std::endl;
}