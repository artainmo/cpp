#include "FragTrap.hpp"

FragTrap::FragTrap(std::string named)
{
  P("Let me teach you the ways of magic! (Constructor call FragTrap)");
  hit_points = 100;
  max_hit_points = 100;
  energy_points = 100;
  max_energy_points = 100;
  level = 1;
  name = named;
  melee_attack_damage = 30;
  ranged_attack_damage = 20;
  armor_damage_reduction = 5;
}

FragTrap::~FragTrap()
{
  P("Yessss, look into my eyes. You're getting sleepy. You're getting... zzzzzz... Zzzzzz... (Destructor call FragTrap)");
}

void FragTrap::rangedAttack(std::string const &target)
{
  std::cout << "Shouldn't you be murdering something about now? FR4G-TP " << name << " attacks " << target << " at range, causing "<< ranged_attack_damage << " points of damage " << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
  std::cout << "Hey, best friend! FR4G-TP " << name << " attacks " << target << " at melee, causing "<< melee_attack_damage << " points of damage " << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
  int random;
  std::string attacks[5] = {"FIRE! ", "WATER! ", "SPACE! ", "EARTH! ", "AIR! "};

  if (energy_points <= 25)
  {
    P("Out of energy");
    return ;
  }
  energy_points -= 25;
  srand(time(NULL)); //If srand not initialized, random name will always be the same
  random = rand() % 5 + 0; //Between 0-4 random value
  std::cout << attacks[random] << name << " attacks " << target << " at range, causing " << hit_points << " points of damage " << std::endl;
}
