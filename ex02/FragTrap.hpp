#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &copy);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &assign);
    void attack(const std::string &target);
    void highFivesGuys();
};

#endif