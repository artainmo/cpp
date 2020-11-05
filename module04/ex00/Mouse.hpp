#ifndef MOUSE_HPP
#define MOUSE_HPP

#include "Victim.hpp"

class Mouse : public Victim
{
public:
  Mouse(std::string name);
  virtual ~Mouse();
  Mouse(const Mouse &to_copy);
  void operator=(const Mouse &to_copy);

  void getPolymorphed() const;
};

#endif
