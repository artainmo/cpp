#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

//Its childclasses contain constant variable, thus coplien form copy and assignation function makes no sense
class Victim
{
public:
  std::string name;

  Victim(std::string name);
  virtual ~Victim(); //Virtual classes are classes that at least contain one virtual function, they always necessitate a virtual destructor if heap object, otherwise compilation error will occur because child classes destructors will not be able to call the parent class(virtual class) destructor

  //Virtual keyword makes sure this function gets overriden by same name function in child class if it exists
  virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &stream, const Victim &Vic); //Is able to take any child of victim

#endif
