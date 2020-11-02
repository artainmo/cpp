#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Victim.hpp"

#define P(x) std::cout << x << std::endl

class Sorcerer
{
public:
  std::string name;
  std::string title;

  Sorcerer(std::string, std::string);
  Sorcerer();
  ~Sorcerer();
  Sorcerer(const Sorcerer &to_copy);
  void operator=(const Sorcerer &to_copy);
  void polymorph(Victim const &) const;
  //polymorph function takes in Victim class, now all classes that have victim as a parent can be given as parameter here

};

std::ostream &operator<<(std::ostream &stream, const Sorcerer &sorc);

#endif
