#ifndef POWERFIRST_HPP
#define POWERFIRST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
  PowerFist();
  virtual ~PowerFist();
  PowerFist(const PowerFist &to_copy);
  void operator=(const PowerFist &to_copy);

  void attack() const;
  //Overrides the pure virtual function of AWeapon
};

#endif
