#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
  NinjaTrap(std::string named);
  ~NinjaTrap();

  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);

  void ninjaShoebox(NinjaTrap const &target);
  void ninjaShoebox(ClapTrap const &target);
  void ninjaShoebox(FragTrap const &target);
  void ninjaShoebox(ScavTrap const &target);
};

#endif
