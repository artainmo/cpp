#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
  SuperMutant();
  virtual ~SuperMutant();
  SuperMutant(const SuperMutant &to_copy);
  void operator=(const SuperMutant &to_copy);

  void takeDamage(int);
};

#endif
