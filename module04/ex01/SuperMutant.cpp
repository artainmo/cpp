#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
:Enemy(170, "Super Mutant")
{
  std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
  std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &to_copy)
:Enemy(to_copy.getHP(), to_copy.getType())
{
  std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

void SuperMutant::operator=(const SuperMutant &to_copy)
{
  setHP(to_copy.getHP());
  setType(to_copy.getType());
}

void SuperMutant::takeDamage(int _damage)
{
  if (_damage < 3)
    return ;
  _damage -= 3;
  Enemy::takeDamage(_damage);
}
