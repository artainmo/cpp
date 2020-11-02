#include "Chicken.hpp"

Chicken::Chicken(std::string named)
:Victim(named)
{
  name = named;
  std::cout << "Cluck cluck." << std::endl;
}

Chicken::~Chicken()
{
  std::cout << "Cluuuuck..." << std::endl;
}

void Chicken::getPolymorphed() const
{
  std::cout << name << " has been turned into a human!" << std::endl;
}
