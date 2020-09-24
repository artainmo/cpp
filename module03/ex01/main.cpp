#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
  FragTrap Robot("S19");
  ScavTrap Robot2("42B");

  P("_____Test FragTrap_____");
  std::cout << "Hit points: " << Robot.hit_points << std::endl;
  std::cout << "Max hit points: " << Robot.max_hit_points << std::endl;
  std::cout << "Energy points: " << Robot.energy_points << std::endl;
  std::cout << "Max energy points: " << Robot.max_energy_points << std::endl;
  std::cout << "Level: " << Robot.level << std::endl;
  std::cout << "Name: " << Robot.name << std::endl;
  std::cout << "Melee attack damage: " << Robot.melee_attack_damage << std::endl;
  std::cout << "Ranged attack damage: " << Robot.ranged_attack_damage << std::endl;
  std::cout << "Armor damage reduction: " << Robot.armor_damage_reduction << std::endl;
  Robot.rangedAttack("Jack");
  Robot.meleeAttack("Benny");
  Robot.takeDamage(110);
  std::cout << "Energy points: " << Robot.energy_points << std::endl;
  Robot.beRepaired(110);
  std::cout << "Energy points: " << Robot.energy_points << std::endl;
  P("Shield test");
  Robot.takeDamage(4);
  std::cout << "Energy points: " << Robot.energy_points << std::endl;
  Robot.takeDamage(90);
  std::cout << "Energy points: " << Robot.energy_points << std::endl;
  Robot.vaulthunter_dot_exe("Billy");
  std::cout << "Energy points: " << Robot.energy_points << std::endl;
  Robot.beRepaired(56);
  std::cout << "Energy points: " << Robot.energy_points << std::endl;
  Robot.vaulthunter_dot_exe("Billy");
  std::cout << "Energy points: " << Robot.energy_points << std::endl;
  P("_____Test ScavTrap_____");
  std::cout << "Hit points: " << Robot2.hit_points << std::endl;
  std::cout << "Max hit points: " << Robot2.max_hit_points << std::endl;
  std::cout << "Energy points: " << Robot2.energy_points << std::endl;
  std::cout << "Max energy points: " << Robot2.max_energy_points << std::endl;
  std::cout << "Level: " << Robot2.level << std::endl;
  std::cout << "Name: " << Robot2.name << std::endl;
  std::cout << "Melee attack damage: " << Robot2.melee_attack_damage << std::endl;
  std::cout << "Ranged attack damage: " << Robot2.ranged_attack_damage << std::endl;
  std::cout << "Armor damage reduction: " << Robot2.armor_damage_reduction << std::endl;
  Robot2.rangedAttack("Jack");
  Robot2.meleeAttack("Benny");
  Robot2.takeDamage(110);
  std::cout << "Energy points: " << Robot2.energy_points << std::endl;
  Robot2.beRepaired(110);
  std::cout << "Energy points: " << Robot2.energy_points << std::endl;
  Robot2.challengeNewcomer();
  std::cout << "Energy points: " << Robot2.energy_points << std::endl;
}
