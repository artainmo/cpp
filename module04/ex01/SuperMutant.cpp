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

void SuperMutant::takeDamage(int _damage)
{
  if (_damage < 3)
    return ;
  _damage -= 3;
  hit_points -= _damage;
  if (hit_points < 0)
    hit_points = 0;
}
