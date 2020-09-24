#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
:name(name), type(type) {}

Zombie::~Zombie()
{
  std::cout << "Destruction of zombie: " << name << std::endl;
}

void Zombie::announce()
{
  std::cout << name << " the zombie is " << type << std::endl;
}
