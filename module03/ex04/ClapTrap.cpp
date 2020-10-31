#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
  P("ClapTrap construction");
  hit_points = 0;
  max_hit_points = 0;
  energy_points = 0;
  max_energy_points = 0;
  level = 0;
  name = "NULL";
  melee_attack_damage = 0;
  ranged_attack_damage = 0;
  armor_damage_reduction = 0;
}

ClapTrap::~ClapTrap()
{
  P("ClapTrap destruction");
}

void ClapTrap::takeDamage(unsigned int amount)
{
  std::cout << "Away with thee! FR4G-TP " << name << " takes damage and loses " << amount << " hit points" << std::endl;
  if ((int)amount > armor_damage_reduction)
  {
    hit_points -= amount;
    hit_points += armor_damage_reduction;
    if (hit_points < 0)
      hit_points = 0;
  }
}

void ClapTrap::beRepaired(unsigned int amount)
{
  std::cout << "Hocus pocus! FR4G-TP " << name << " regenerates " << amount << " hit points" << std::endl;
  hit_points += amount;
  if (hit_points > max_hit_points)
    hit_points = max_hit_points;
}
