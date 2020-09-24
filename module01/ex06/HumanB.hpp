#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
  std::string name;
  //To avoid forced constructor initialization use a pointer on weapon, because a pointer can be initialized with null while a reference cannot
  Weapon *weapon;

  HumanB(std::string name);
  void attack();
  void setWeapon(Weapon &_weapon);
};

#endif
