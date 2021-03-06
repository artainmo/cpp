#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "FragTrap.hpp"

class ScavTrap
{
public:
  int hit_points;
  int max_hit_points;
  int energy_points;
  int max_energy_points;
  int level;
  std::string name;
  int melee_attack_damage;
  int ranged_attack_damage;
  int armor_damage_reduction;

  ScavTrap(std::string named);
  ~ScavTrap();

  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void challengeNewcomer();
};

#endif
