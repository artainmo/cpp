#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string named)
{
  P("Constructor of Ninja");
  hit_points = 60;
  max_hit_points = 60;
  energy_points = 120;
  max_energy_points = 120;
  level = 1;
  name = named;
  melee_attack_damage = 60;
  ranged_attack_damage = 5;
  armor_damage_reduction = 0;
}

NinjaTrap::~NinjaTrap()
{
  P("Destruction of Ninja");
}

void NinjaTrap::rangedAttack(std::string const &target)
{
  std::cout << "Shouldn't you be murdering something about now? FR4G-TP " << name << " attacks " << target << " at range, causing "<< ranged_attack_damage << " points of damage " << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
  std::cout << "Hey, best friend! FR4G-TP " << name << " attacks " << target << " at melee, causing "<< melee_attack_damage << " points of damage " << std::endl;
}



void NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
  std::cout << "Take my shoe in your face! " << name << " attacks " << target.name << " with his shoe, causing "<< ranged_attack_damage << " points of damage " << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
  std::cout << "Claping my shoes in your face! " << name << " attacks " << target.name << " with his shoe, causing "<< ranged_attack_damage << " points of damage " << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target)
{
  std::cout << "Boxing shoes! " << name << " attacks " << target.name << " with his shoe, causing "<< ranged_attack_damage << " points of damage " << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
  std::cout << "Knockout! " << name << " attacks " << target.name << " with his shoe, causing "<< ranged_attack_damage << " points of damage " << std::endl;
}
