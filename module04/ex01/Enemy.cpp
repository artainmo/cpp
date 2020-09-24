#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
:hit_points(hp), type(type) {}

Enemy::~Enemy() {}

std::string const Enemy::getType() const
{
  return (type);
}

int Enemy::getHP() const
{
  return (hit_points);
}

void Enemy::takeDamage(int _damage)
{
  hit_points -= _damage;
}
