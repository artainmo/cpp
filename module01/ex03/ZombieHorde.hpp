#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <unistd.h> //Sleep function

class ZombieHorde
{
public:
  Zombie *horde;
  int N;

  ZombieHorde(int);
  ~ZombieHorde();
  void announce();
};

#endif
