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
  _xp += 10; //_xp is set as protected element, meaning its child classes can access it
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
