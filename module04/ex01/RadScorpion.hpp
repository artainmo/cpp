#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy //Uses the takedamage virtual function from enemy
{
public:
  RadScorpion();
  virtual ~RadScorpion();
  RadScorpion(const RadScorpion &to_copy);
  void operator=(const RadScorpion &to_copy);
};

#endif
