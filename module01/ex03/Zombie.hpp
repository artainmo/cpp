#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
  std::string name;
  std::string type;

  void Zombie_set(std::string name, std::string type);
  void announce();
  ~Zombie();
};

#endif
