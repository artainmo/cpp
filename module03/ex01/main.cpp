#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

int main()
{
  { //Scopes to destroy stack objects automatically once out of scope
    P("_____Test FragTrap_____");
    FragTrap Robot("S19");

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
    std::cout << "Hit points: " << Robot.hit_points << std::endl;
    Robot.beRepaired(110);
    std::cout << "Hit points: " << Robot.hit_points << std::endl;
    P("~~Shield test~~");
    Robot.takeDamage(4);
    std::cout << "Hit points: " << Robot.hit_points << std::endl;
    Robot.takeDamage(90);
    std::cout << "Hit points: " << Robot.hit_points << std::endl;
    Robot.vaulthunter_dot_exe("Billy");
    sleep(1);
    std::cout << "Energy points: " << Robot.energy_points << std::endl;
    Robot.beRepaired(56);
    std::cout << "Hit points: " << Robot.hit_points << std::endl;
    P("~~Energy points test~~");
    Robot.vaulthunter_dot_exe("Billy");
    sleep(1);
    std::cout << "Energy points: " << Robot.energy_points << std::endl;
    Robot.vaulthunter_dot_exe("Billy");
    sleep(1);
    std::cout << "Energy points: " << Robot.energy_points << std::endl;
    Robot.vaulthunter_dot_exe("Billy");
    sleep(1);
    std::cout << "Energy points: " << Robot.energy_points << std::endl;
    Robot.vaulthunter_dot_exe("Billy");
  }
  {
    P("_____Test ScavTrap_____");
    ScavTrap Robot("S19");

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
    std::cout << "Hit points: " << Robot.hit_points << std::endl;
    Robot.beRepaired(110);
    std::cout << "Hit points: " << Robot.hit_points << std::endl;
    P("~~Shield test~~");
    Robot.takeDamage(3);
    std::cout << "Hit points: " << Robot.hit_points << std::endl;
    Robot.takeDamage(90);
    std::cout << "Hit points: " << Robot.hit_points << std::endl;
    Robot.beRepaired(56);
    std::cout << "Hit points: " << Robot.hit_points << std::endl;
    P("~~challengeNewcomer test~~");
    Robot.challengeNewcomer();
    sleep(1);
    Robot.challengeNewcomer();
  }
}
