#include "Victim.hpp"

Victim::Victim(std::string name)
:name(name)
{
 std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
  std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

std::ostream &operator<<(std::ostream &stream, const Victim &Vic)
{
  return (stream << "I'm " << Vic.name << " and I like otters!" << std::endl);
}

void Victim::getPolymorphed() const
{
  std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}
