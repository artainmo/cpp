#ifndef POWERFIRST_HPP
#define POWERFIRST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
  PowerFist();
  ~PowerFist();

  void attack() const;
  //Overrides the pure virtual function of AWeapon
};

#endif
