#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
  PlasmaRifle();
  virtual ~PlasmaRifle();
  PlasmaRifle(const PlasmaRifle &to_copy);
  void operator=(const PlasmaRifle &to_copy);

  void attack() const;
  //Overrides the pure virtual function of AWeapon
};

#endif
