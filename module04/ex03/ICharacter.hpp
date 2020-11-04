#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;
//solution to header problems with ICharacter - AMateria that both refer to each other and one need to refer first.

//A pure virtual class for character class
class ICharacter
{
public:
  virtual ~ICharacter() {}
  virtual std::string const & getName() const = 0;
  virtual void equip(AMateria* m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter& target) = 0;
};

#endif
