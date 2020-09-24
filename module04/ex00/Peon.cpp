#include "Peon.hpp"

Peon::Peon(std::string named)
:Victim(named)
{
  name = named;
  std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
  std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
  std::cout << name << " has been turned into a pink pony!" << std::endl;
}
