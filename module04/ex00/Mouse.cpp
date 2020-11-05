#include "Mouse.hpp"

Mouse::Mouse(std::string named)
:Victim(named)
{
  std::cout << "Pip Pip." << std::endl;
}

Mouse::~Mouse()
{
  std::cout << "Piiieeep..." << std::endl;
}

Mouse::Mouse(const Mouse &to_copy)
:Victim(to_copy.name)
{
  std::cout << "Pip Pip." << std::endl;
}

void Mouse::operator=(const Mouse &to_copy)
{
  name = to_copy.name;
}

void Mouse::getPolymorphed() const
{
  std::cout << name << " has been turned into a rat!" << std::endl;
}
