#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
public:
  Peon(std::string name);
  virtual ~Peon(); //Virtual is necessary in parent class or in child class, if heap allocated object, or error will occur whereby parent-class will not go through its destructor, for security reasons virtual keyword can be used in both parent and child class
  Peon(const Peon &to_copy);
  void operator=(const Peon &to_copy);

  void getPolymorphed() const;
};

#endif
