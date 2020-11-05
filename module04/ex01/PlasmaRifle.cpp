#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
:AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const
{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &to_copy)
:AWeapon(to_copy.getName(), to_copy.getAPCost(), to_copy.getDamage()) {}

void PlasmaRifle::operator=(const PlasmaRifle &to_copy)
{
  setName(to_copy.getName());
  setAPCost(to_copy.getAPCost());
  setDamage(to_copy.getDamage());
}
