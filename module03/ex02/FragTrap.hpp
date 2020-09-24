#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

#define P(x) std::cout << x << std::endl

class FragTrap : public ClapTrap
{
public:
  FragTrap(std::string named);
  ~FragTrap();

  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);

  void vaulthunter_dot_exe(std::string const & target);
};

#endif
