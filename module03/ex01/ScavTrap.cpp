#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string named)
{
  P("I got quests! (Constructor call)");
  hit_points = 100;
  max_hit_points = 100;
  energy_points = 50;
  max_energy_points = 50;
  level = 1;
  name = named;
  melee_attack_damage = 20;
  ranged_attack_damage = 15;
  armor_damage_reduction = 3;
}

ScavTrap::~ScavTrap()
{
  P("Alaka-ZAM! (Destructor call)");
}

void ScavTrap::rangedAttack(std::string const &target)
{
  std::cout << "Magic waits for no one, apprentice! " << name << " attacks " << target << " at range, causing "<< hit_points << " points of damage " << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
  std::cout << "Sooooo... how are things? " << name << " attacks " << target << " at melee, causing "<< hit_points << " points of damage " << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
  std::cout << "Ahhh! " << name << " takes damage and loses " << amount << " points of damage " << std::endl;
  if ((int)amount > armor_damage_reduction)
  {
    energy_points -= amount;
    energy_points += armor_damage_reduction;
    if (energy_points < 0)
      energy_points = 0;
  }
}

void ScavTrap::beRepaired(unsigned int amount)
{
  std::cout << "BEST day of my life! " << name << " regenerates " << amount << "points of life " << std::endl;
  energy_points += amount;
  if (energy_points > max_energy_points)
    energy_points = max_energy_points;
}

void ScavTrap::challengeNewcomer()
{
  int random;
  std::string challenges[5] = {"Kill 25 enemies in succession with no more than 7 seconds in between each kill", "Kill 1,000 enemies using your Action Skill", "Earn 10,000 Dollars (Accumulative)", "Win 50 Duels", "Kill 250 Rakk"};

  srand(time(NULL)); //If srand not initialized, random name will always be the same
  random = rand() % 5 + 0; //Between 0-4 random value
  std::cout << "I would like to challenge you with this: " << challenges[random] << std::endl;
}
