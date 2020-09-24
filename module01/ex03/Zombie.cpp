#include "Zombie.hpp"

void Zombie::Zombie_set(std::string _name, std::string _type)
{
  name = _name;
  type = _type;
}

Zombie::~Zombie()
{
  std::cout << "Destruction of zombie: " << name << std::endl;
}

void Zombie::announce()
{
  std::cout << name << " the zombie is created" << std::endl;
}
