#include "Human.hpp"

std::string Human::identify()
{
  return brain->identify();
}


//This function returns object the pointer points to, not the pointer on the object
Brain &Human::getBrain()
{
  return *brain;
}
//Contrary to c in c++ we use & in function declaration to return the object the pointer points to
//in the function itself we use the pointer * similar to c (we return the object, but not a copy in memory space the object in same memory space)
