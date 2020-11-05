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
  AMateria::use(target);
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure(const Cure &to_copy)
:AMateria("cure")
{
  setXP(to_copy.getXP());
}

void Cure::operator=(const Cure &to_copy)
{
  //type is already set
  setXP(to_copy.getXP());
}
