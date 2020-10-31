#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public virtual ClapTrap
{
public:
  ScavTrap(std::string named);
  ~ScavTrap();

  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);

  void challengeNewcomer();
};

#endif
