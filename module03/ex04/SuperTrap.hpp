#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"


//because both parents of SuperTrap have as parent ClapTrap, meaning SuperTrap would have two times the same grandparent,
//so virtual keyword is used to only create ClapTrap once, it is used in the member classes, to indicate no ambiguity
class SuperTrap : public FragTrap, public NinjaTrap
{
public:
  SuperTrap(std::string named);
  ~SuperTrap();

  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
};

#endif
