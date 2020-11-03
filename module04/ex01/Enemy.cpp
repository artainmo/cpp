#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
:hit_points(hp), type(type) {}

Enemy::Enemy(const Enemy &to_copy)
{
  *this = to_copy;
}

Enemy::~Enemy() {}

std::string const Enemy::getType() const
{
  return (type);
}

void  Enemy::operator=(const Enemy &to_copy)
{
  hit_points = to_copy.getHP();
  type = to_copy.getType();
}

int Enemy::getHP() const
{
  return (hit_points);
}

void Enemy::takeDamage(int _damage)
{
  if (_damage < 0)
    return ;
  hit_points -= _damage;
  if (hit_points < 0)
    hit_points = 0;
}
