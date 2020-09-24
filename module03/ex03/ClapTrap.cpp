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
  std::cout << "Away with thee! FR4G-TP " << name << " takes damage and loses " << amount << " points of damage " << std::endl;
  if ((int)amount > armor_damage_reduction)
  {
    energy_points -= amount;
    energy_points += armor_damage_reduction;
    if (energy_points < 0)
      energy_points = 0;
  }
}

void ClapTrap::beRepaired(unsigned int amount)
{
  std::cout << "Hocus pocus! FR4G-TP " << name << " regenerates " << amount << "points of life " << std::endl;
  energy_points += amount;
  if (energy_points > max_energy_points)
    energy_points = max_energy_points;
}
