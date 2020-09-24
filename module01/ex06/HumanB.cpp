#include "HumanB.hpp"


void HumanB::attack()
{
  std::cout << name << " attacks with his " << weapon->type << std::endl;
}

HumanB::HumanB(std::string name)
:name(name) {}

void HumanB::setWeapon(Weapon &_weapon)
{
  weapon = &_weapon;
}
