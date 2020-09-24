#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define P(x) std::cout << x << std::endl

class ClapTrap
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

  ClapTrap();
  ~ClapTrap();

  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
