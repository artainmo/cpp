#ifndef ISUAD_HPP
#define ISUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

#define P(x) std::cout << x << std::endl;
//Is a pure virtual class, meaning it must be a parent class
class ISquad
{
public:
  virtual ~ISquad() {}
  virtual int getCount() const = 0;
  virtual ISpaceMarine* getUnit(int) const = 0;
  virtual int push(ISpaceMarine*) = 0;
};

#endif
