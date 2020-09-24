#ifndef HUMAN_CPP
#define HUMAN_CPP

#include "Brain.hpp"

class Human
{
public:
  Brain *brain;
  //A pointer is used to keep constant memory adress even when returning from a function (going out of scope)

  Brain &getBrain();
  //Contrary to c in c++ we use & in function declaration to return the object the pointer points to, in the function itself we use the pointer * similar to c
  //& returns the object itself in same memory place, otherwise it would simply return a copy in another memory location of the returned value, creating a copy is slower
  std::string identify();
};

#endif
