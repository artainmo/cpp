#include "Fixed.hpp"

Fixed::Fixed()
:fixed_point_value(0)
{
  P("Default constructor called");
}

Fixed::~Fixed()
{
  P("Destructor called");
}

//Assignation operator called // <-- This line may be missing depending on your implementation
// So following getRawBits member function called line also missing
// No use of assignment operator so not those lines in response
Fixed::Fixed(const Fixed &to_copy)
: fixed_point_value(to_copy.fixed_point_value)
{
  P("Copy constructor called");
}

void Fixed::operator=(const Fixed &to_copy)
{
  P("Assignation operator called");
  fixed_point_value = to_copy.getRawBits();
}

int Fixed::getRawBits(void) const
{
  P("getRawBits member function called");
  return fixed_point_value;
}

void Fixed::setRawBits(const int raw)
{
  fixed_point_value = raw;
}
