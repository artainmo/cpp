#include "Character.hpp"

Character::Character(std::string const &name)
:name(name), action_points(40), Weapon(nullptr) {}


Character::~Character()
{
  std::cout << "Destruction of " << name << std::endl;
}

Character::Character(Character const &to_copy)
:name(to_copy.getName()), action_points(to_copy.getAP()), Weapon(to_copy.getWeapon()) {}

void Character::operator=(Character const &to_copy)
{
  name = to_copy.getName();
  action_points = to_copy.getAP();
  Weapon = to_copy.getWeapon();
}

void Character::recoverAP()
{
  if (action_points > 30)
    action_points = 40;
  else
    action_points += 10;
}

void Character::equip(AWeapon *_Weapon)
{
  Weapon = _Weapon;
}

void Character::attack(Enemy *enemy)
{
  if (Weapon != nullptr && action_points > Weapon->getAPCost())
  {
    std::cout << name << " attacks " << enemy->getType() <<  " with a " << Weapon->getName() << std::endl;
    Weapon->attack();
    action_points -= Weapon->getAPCost();
    enemy->takeDamage(Weapon->getDamage());
    if (enemy->getHP() < 1)
      delete enemy;
  }
}

std::string const Character::getName() const
{
  return (name);
}

int Character::getAP() const
{
  return (action_points);
}

AWeapon *Character::getWeapon() const
{
  return (Weapon);
}

std::ostream &operator<<(std::ostream &stream, Character const &c)
{
  if (c.getWeapon() != nullptr)
    return (stream << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName()  << std::endl);
  else
    return (stream << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl);
}
