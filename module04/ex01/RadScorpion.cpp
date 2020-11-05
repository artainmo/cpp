#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
:Enemy(80, "RadScorpion")
{
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
  std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &to_copy)
:Enemy(to_copy.getHP(),to_copy.getType())
{
  std::cout << "* click click click *" << std::endl;
}

void RadScorpion::operator=(const RadScorpion &to_copy)
{
  setHP(to_copy.getHP());
  setType(to_copy.getType());
}
