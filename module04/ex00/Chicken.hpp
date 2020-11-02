#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "Victim.hpp"

class Chicken : public Victim
{
public:
  Chicken(std::string name);
  ~Chicken();

  void getPolymorphed() const;
};

#endif
