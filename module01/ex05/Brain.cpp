#include "Brain.hpp"

//A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream
//Here we use stringstream to extract the address stored in the this keyword
//With c++11 though you can use the function std::to_string otherwise instead we use the stringstream method
//This keyword stores address of actual object
std::string Brain::identify()
{
  std::string address;
  std::stringstream oss;

  oss << this;
  address =  oss.str();
  oss.clear();
  return address;
}
