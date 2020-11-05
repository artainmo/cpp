#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "Victim.hpp"

class Chicken : public Victim
{
public:
  Chicken(std::string name);
  virtual ~Chicken();
  Chicken(const Chicken &to_copy);
  void operator=(const Chicken &to_copy);

  void getPolymorphed() const;
};

#endif
