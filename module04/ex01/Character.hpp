#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
  std::string name;
  int action_points;
  AWeapon *Weapon;

public:
  Character(std::string const &name);
  Character(Character const &to_copy);
  ~Character();
  void operator=(Character const &to_copy);

  void recoverAP();
  void equip(AWeapon*);
  void attack(Enemy*);
  std::string const getName() const; //first const meaning the return value is constant and second const meaning the values in class do not change by function
  int getAP() const;
  AWeapon *getWeapon() const;
};

std::ostream &operator<<(std::ostream &stream, Character const &c);

#endif
