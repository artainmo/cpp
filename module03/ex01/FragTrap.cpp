#include "FragTrap.hpp"

FragTrap::FragTrap(std::string named)
{
  P("Let me teach you the ways of magic! (Constructor call)");
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
  P("Yessss, look into my eyes. You're getting sleepy. You're getting... zzzzzz... Zzzzzz... (Destructor call)");
}

void FragTrap::rangedAttack(std::string const &target)
{
  std::cout << "Shouldn't you be murdering something about now? FR4G-TP " << name << " attacks " << target << " at range, causing "<< ranged_attack_damage << " points of damage " << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
  std::cout << "Hey, best friend! FR4G-TP " << name << " attacks " << target << " at melee, causing "<< melee_attack_damage << " points of damage " << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
{
  std::cout << "Hocus pocus! FR4G-TP " << name << " regenerates " << amount << " hit points" << std::endl;
  hit_points += amount;
  if (hit_points > max_hit_points)
    hit_points = max_hit_points;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
  int random;
  std::string attacks[5][2] = {{"FIRE! ", "34"}, {"WATER! ", "56"}, {"SPACE! ", "20"}, {"EARTH! ", "78"}, {"AIR! ", "12"}};

  if (energy_points < 25)
  {
    P("Out of energy");
    return ;
  }
  energy_points -= 25;
  srand(time(NULL)); //If srand not initialized, random name will always be the same
  random = rand() % 5 + 0; //Between 0-4 random value
  std::cout << attacks[random][0] << name << " attacks " << target << " at range, causing " << attacks[random][1] << " points of damage " << std::endl;
}
