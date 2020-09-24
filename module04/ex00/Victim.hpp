#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
public:
  std::string name;

  Victim(std::string name);
  ~Victim();

  //Virtual keyword has only to be defined in the class definition
  //Virtual keyword makes sure this function gets overriden by same name function in child class
  virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &stream, const Victim &Vic);

#endif
