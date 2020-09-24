#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
  SuperMutant();
  ~SuperMutant();

  void takeDamage(int);
};

#endif
