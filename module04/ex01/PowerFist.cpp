#include "PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

void PowerFist::attack() const
{
  std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist(const PowerFist &to_copy)
:AWeapon(to_copy.getName(), to_copy.getAPCost(), to_copy.getDamage()) {}

void PowerFist::operator=(const PowerFist &to_copy)
{
  setName(to_copy.getName());
  setAPCost(to_copy.getAPCost());
  setDamage(to_copy.getDamage());
}
