#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
  std::string name;
  std::string type;

  Zombie(std::string name, std::string type);
  void announce();
  ~Zombie();
};

#endif
