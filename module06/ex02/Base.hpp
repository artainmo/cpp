#ifndef BASE_HPP
#define BASE_HPP

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>

#define P(X) std::cout << X << std::endl;

class Base
{
public:
  virtual ~Base() {} //In order to be a polymorphic type, your class must have at least one virtual function. If your classes are not polymorphic types, the base-to-derived use of dynamic_cast will not compile.

};

#endif
