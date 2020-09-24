#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include <iostream>
#include "Zombie.hpp"
#include <cstdlib>

class ZombieEvent
{
public:
  std::string type;

  void setZombieType(std::string);
  Zombie* newZombie(std::string);
};

void randomChump();

#endif
