#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

//A child class of ISpaceMarine, that the squad class can contain
class TacticalMarine : public ISpaceMarine
{
public:
  TacticalMarine();
  ~TacticalMarine();
  ISpaceMarine* clone() const;
  void battleCry() const;
  void rangedAttack() const;
  void meleeAttack() const;
};

#endif
