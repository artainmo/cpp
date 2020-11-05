#ifndef MACHINEGUN_HPP
#define MACHINEGUN_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

//PDF correction -> "There are tests in the main with more derived weapons and more derived enemies." -> this means create own extra derived classes
class MachineGun : public AWeapon
{
public:
  MachineGun();
  virtual ~MachineGun();
  MachineGun(const MachineGun &to_copy);
  void operator=(const MachineGun &to_copy);

  void attack() const;
  //Overrides the pure virtual function of AWeapon
};

#endif
