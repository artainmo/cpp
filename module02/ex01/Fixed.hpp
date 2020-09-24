#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define P(X) std::cout << X << std::endl

class Fixed
{
private:
  int fixed_point_value;
  static const int fractional_bits = 8;
  //Only static const int and static const enum can be initialized inside class definition
  //const meaning its value cannot be changed and static, only allocated once in static memory and shared between all objects
public:
  Fixed();
  Fixed(const int value);
  Fixed(const float value);
  ~Fixed();
  Fixed(const Fixed &to_copy);
  //Copy constructor takes same object as parameter to assign its values to a new object in another memory location
  //Takes reference to avoid creating a copy and calling the copy contructor, creating infinite loop of copy constructor calls
  //We use const because n c const should be used as much as possible to avoid modifications when you should not, when creating a copy it does not make sense to change its values
  void operator=(const Fixed &to_copy);
  //Copy constructor is called when a new object is created from an existing object, as a copy of the existing object.
  //And assignment operator is called when an already initialized object is assigned a new value from another existing object.
  int getRawBits(void) const;
  //The const member functions are the functions which are declared as constant in the program. The object called by these functions cannot be modified.
  void setRawBits(const int raw);
  float toFloat() const;
  int toInt() const;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &f);
//The function itoa that converts an int into a string can cause warnings and even compilation errors on different operating systems
//That is why in c++11 we use std::to_string and before c++11 we use c++ streams, an integer can be put into a stream and the stream can be converted into a string
//But here we simply make sure to be able to insert in std::cout or other stream object for example


#endif
