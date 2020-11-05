#ifndef SPIDER_HPP
#define SPIDER_HPP

#include "Enemy.hpp"

class Spider : public Enemy //Uses the takedamage virtual function from enemy
{
public:
  Spider();
  virtual ~Spider();
  Spider(const Spider &to_copy);
  void operator=(const Spider &to_copy);
};

#endif
