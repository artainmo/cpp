#ifndef ASSAULTTERMINATOT_HPP
#define ASSAULTTERMINATOT_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

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
