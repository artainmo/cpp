#include "SuperTrap.hpp"

//In general, it is not allowed to call the grandparent’s constructor directly,
//it has to be called through parent class. It is allowed only when ‘virtual’ keyword is used.
//We call the parent and grandparent constructors too
//First we need to call the grandparent or virtual base, after we can call the parent classes or direct bases
SuperTrap::SuperTrap(std::string named)
: ClapTrap(), FragTrap(named), NinjaTrap(named)
{
  P("Constructor of SuperTrap");
  hit_points = 100;//fragTrap::hit_points;
  max_hit_points = 100;//fragTrap::max_hit_points;
  energy_points = 120;//NinjaTrap::energy_points;
  max_energy_points = 120;//NinjaTrap::max_energy_points;
  level = 1;
  name = named;
  melee_attack_damage = 60;//NinjaTrap::melee_attack_damage;
  ranged_attack_damage = 20;//FragTrap::ranged_attack_damage;
  armor_damage_reduction = 5;//FragTrap::armor_damage_reduction;
}

SuperTrap::~SuperTrap()
{
  P("Destruction of SuperTrap");
}


void SuperTrap::rangedAttack(std::string const &target)
{
  FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
  NinjaTrap::meleeAttack(target);
}
