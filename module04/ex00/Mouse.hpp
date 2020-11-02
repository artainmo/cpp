#ifndef MOUSE_HPP
#define MOUSE_HPP

#include "Victim.hpp"

class Mouse : public Victim
{
public:
  Mouse(std::string name);
  ~Mouse();

  void getPolymorphed() const;
};

#endif
