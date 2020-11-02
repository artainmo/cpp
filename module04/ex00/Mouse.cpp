#include "Mouse.hpp"

Mouse::Mouse(std::string named)
:Victim(named)
{
  name = named;
  std::cout << "Pip Pip." << std::endl;
}

Mouse::~Mouse()
{
  std::cout << "Piiieeep..." << std::endl;
}

void Mouse::getPolymorphed() const
{
  std::cout << name << " has been turned into a rat!" << std::endl;
}
