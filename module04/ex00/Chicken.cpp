#include "Chicken.hpp"

Chicken::Chicken(std::string named)
:Victim(named)
{
  std::cout << "Cluck cluck." << std::endl;
}

Chicken::~Chicken()
{
  std::cout << "Cluuuuck..." << std::endl;
}

Chicken::Chicken(const Chicken &to_copy)
:Victim(to_copy.name)
{
  std::cout << "Cluck cluck." << std::endl;
}

void Chicken::operator=(const Chicken &to_copy)
{
  name = to_copy.name;
}

void Chicken::getPolymorphed() const
{
  std::cout << name << " has been turned into a human!" << std::endl;
}
