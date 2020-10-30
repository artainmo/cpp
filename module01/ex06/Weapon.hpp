#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include <cstring>

#define P(x) std::cout << x << std::endl;

class Weapon
{
public:
  std::string type;

  Weapon(std::string);
  const std::string &getType(); //Return const reference instead of copy to go faster
  void setType(std::string);
};


#endif
