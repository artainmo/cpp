#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;
//solution to header problems with ICharacter - AMateria that both refer to each other and one need to refer first.

//Materia seems to come from a video game and means a power that a character can have
class AMateria
{
private:
  unsigned int _xp;
  std::string type;
public:
  AMateria(std::string const & type);
  AMateria(AMateria const &to_copy);
  void operator=(AMateria const &to_copy);
  virtual ~AMateria();

  std::string const & getType() const;
  unsigned int getXP() const;
  void setXP(unsigned int xp);
  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);
};

#endif
