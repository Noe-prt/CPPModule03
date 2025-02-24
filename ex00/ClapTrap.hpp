#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& copy);
    ClapTrap(const std::string& name, int hitPoints, int energyPoints, int attackDamage);
    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap& assign);

    const std::string& getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    const std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};

#endif