#include "Cure.hpp"

Cure::Cure()
:AMateria("cure") {}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
  return (new Cure());
}

void Cure::use(ICharacter& target)
{
  _xp += 10; //_xp is set as protected element, meaning its child classes can access it
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
