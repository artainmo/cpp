#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
  Ice();
  virtual ~Ice();
  Ice(const Ice &to_copy);
  void operator=(const Ice &to_copy);

  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif
