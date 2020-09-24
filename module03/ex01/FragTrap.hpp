#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

#define P(x) std::cout << x << std::endl

class FragTrap
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

  FragTrap(std::string named);
  ~FragTrap();

  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void vaulthunter_dot_exe(std::string const & target);
};

#endif
