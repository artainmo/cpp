#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
:_xp(0), type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &to_copy)
{
  *this = to_copy;
}
//Do a shallow copy as it is enough
//This calls the operator= function

void AMateria::operator=(AMateria const &to_copy)
{
  _xp = to_copy._xp;
}
//Do a shallow copy as it is enough

std::string const & AMateria::getType() const //Returns the materia type
{
  return (type);
}

unsigned int AMateria::getXP() const //Returns the Materia's XP
{
  return (_xp);
}

void AMateria::use(ICharacter& target)
{
  (void)target; //Use it for no warning of non-used variable
  _xp += 10;
}
