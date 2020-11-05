#include "ShotGun.hpp"

ShotGun::ShotGun()
:AWeapon("Shot Gun", 10, 30) {}

ShotGun::~ShotGun() {}

void ShotGun::attack() const
{
  std::cout << "* PPPPPPHHHH *" << std::endl;
}

ShotGun::ShotGun(const ShotGun &to_copy)
:AWeapon(to_copy.getName(), to_copy.getAPCost(), to_copy.getDamage()) {}

void ShotGun::operator=(const ShotGun &to_copy)
{
  setName(to_copy.getName());
  setAPCost(to_copy.getAPCost());
  setDamage(to_copy.getDamage());
}
