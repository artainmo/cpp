#ifndef ASSAULTTERMINATOT_HPP
#define ASSAULTTERMINATOT_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

//A child class of ISpaceMarine, that the squad class can contain
class AssaultTerminator : public ISpaceMarine
{
public:
  AssaultTerminator();
  ~AssaultTerminator();
  ISpaceMarine* clone() const;
  void battleCry() const;
  void rangedAttack() const;
  void meleeAttack() const;
};

#endif
