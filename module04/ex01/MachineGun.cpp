#include "MachineGun.hpp"

MachineGun::MachineGun()
:AWeapon("Machine Gun", 2, 7) {}

MachineGun::~MachineGun() {}

void MachineGun::attack() const
{
  std::cout << "* pppppppppppppplllllllllllll *" << std::endl;
}

MachineGun::MachineGun(const MachineGun &to_copy)
:AWeapon(to_copy.getName(), to_copy.getAPCost(), to_copy.getDamage()) {}

void MachineGun::operator=(const MachineGun &to_copy)
{
  setName(to_copy.getName());
  setAPCost(to_copy.getAPCost());
  setDamage(to_copy.getDamage());
}
