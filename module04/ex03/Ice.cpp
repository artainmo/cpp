#include "Ice.hpp"

Ice::Ice()
:AMateria("ice") {}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
  return (new Ice());
}

void Ice::use(ICharacter& target)
{
  AMateria::use(target);
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(const Ice &to_copy)
:AMateria("ice")
{
  setXP(to_copy.getXP());
}

void Ice::operator=(const Ice &to_copy)
{
  //type is already set
  setXP(to_copy.getXP());
}
