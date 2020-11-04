#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

#include <iostream>

//Is a pure virtual class, meaning it must be a parent class, it is used to form different kinds of marine classes
class ISpaceMarine
{
public:
  virtual ~ISpaceMarine() {}
  virtual ISpaceMarine* clone() const = 0;
  virtual void battleCry() const = 0;
  virtual void rangedAttack() const = 0;
  virtual void meleeAttack() const = 0;
};

#endif
