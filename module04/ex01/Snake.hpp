#ifndef SNAKE_HPP
#define SNAKE_HPP

#include "Enemy.hpp"

class Snake : public Enemy //Uses the takedamage virtual function from enemy
{
public:
  Snake();
  virtual ~Snake();
  Snake(const Snake &to_copy);
  void operator=(const Snake &to_copy);
};

#endif
