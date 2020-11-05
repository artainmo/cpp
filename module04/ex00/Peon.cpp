#include "Peon.hpp"

Peon::Peon(std::string named)
:Victim(named)
{
  std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &to_copy)
:Victim(to_copy.name)
{
  std::cout << "Zog zog." << std::endl;
}

void Peon::operator=(const Peon &to_copy)
{
  name = to_copy.name;
}

Peon::~Peon()
{
  std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
  std::cout << name << " has been turned into a pink pony!" << std::endl;
}
