#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
:name(name), damage(damage), shooting_cost(apcost) {}

AWeapon::AWeapon(AWeapon const &to_copy)
:name(to_copy.getName()), damage(to_copy.getDamage()), shooting_cost(to_copy.getAPCost()) {}

AWeapon::~AWeapon() {}

void AWeapon::operator=(AWeapon const &to_copy)
{
  name = to_copy.getName();
  shooting_cost = to_copy.getAPCost();
  damage = to_copy.getDamage();
}

std::string const AWeapon::getName() const
{
  return (name);
}

int AWeapon::getAPCost() const
{
  return (shooting_cost);
}

int AWeapon::getDamage() const
{
  return (damage);
}
