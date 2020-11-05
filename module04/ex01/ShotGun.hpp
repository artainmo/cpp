#ifndef SHOTGUN_HPP
#define SHOTGUN_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class ShotGun : public AWeapon
{
public:
  ShotGun();
  virtual ~ShotGun();
  ShotGun(const ShotGun &to_copy);
  void operator=(const ShotGun &to_copy);

  void attack() const;
  //Overrides the pure virtual function of AWeapon
};

#endif
