#include "Fixed.hpp"

//Fixed numbers are used when floats are too slow and ints are not precise enough
//Every number has a binary point, integers have a zero(position) binary point,
//<< >> shifting can be used to change the binary point position.
//Casting can also be used to set the binary point at a certain position, if you cast to int you set the binary point to position zero

//Applicable for shifting integers
//<< (left shift) Takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift.
//Or in other words left shifting an integer “x” with an integer “y” (x<<y) is equivalent to multiplying x with 2^y (2 raise to power y).
//Right shifting, shifts bytes to the right and is equivalent to dividing x with 2^y

//To represent a real number in computers (or any hardware in general),
//we can define a fixed point number type simply by implicitly fixing the binary point to be at some position
//of a numeral. We will then simply adhere to this implicit convention when we represent numbers.
//We use shifting to shift the binary point
//You can also use casts, when casting you define the location of the binary point
// if we want 8fractional bits we can shift an integer 8bits to the left and a float 8bits to the left, round it and cast it to int
//Same for negative numbers

//Fixed point numbers are integers with a non-zero binary point position, thus they are shifted integers

Fixed::Fixed()
:fixed_point_value(0)
{
  P("Default constructor called");
}

Fixed::~Fixed()
{
  P("Destructor called");
}

Fixed::Fixed(const int value)
{
  P("Int constructor called");
  fixed_point_value = (value << fractional_bits); //We shift the binary point from position 0 to position value fractional bits
}

Fixed::Fixed(const float value)
{
  P("Float constructor called");
  //We cannot directly use value << fractional_bits, because it creates an error to shift float and int, the following creates same output without error
  fixed_point_value = roundf(value * (1 << fractional_bits));
}

//Doing the inverse process
//By dividing we make an equivalent of fixed_point_value << fractional_bits, but to make a final float and int we need to make the division with a float that we can cast instead of a division between two ints that will give an int in the end
float Fixed::toFloat() const
{
  return (fixed_point_value / (float)(1 << fractional_bits));
}

//Doing the inverse process
int Fixed::toInt() const
{
  return (fixed_point_value >> fractional_bits); //We shift the binary point from position fractional_bits to position 0
}

Fixed::Fixed(const Fixed &to_copy)
{
  P("Copy constructor called");
  *this = to_copy;
}
//assignation operator not used and thus call does not appear in end output

void Fixed::operator=(const Fixed &to_copy)
{
  P("Assignation operator called");
  fixed_point_value = to_copy.fixed_point_value;
}

std::ostream &operator<<(std::ostream &output_stream, const Fixed &f)
{
  return (output_stream << f.toFloat());
}
//Goal is to be able to insert into output streams like std::cout, it returns the output stream with its floating point inserted in it.

int Fixed::getRawBits(void) const
{
  P("getRawBits member function called");
  return fixed_point_value;
}

void Fixed::setRawBits(const int raw)
{
  fixed_point_value = raw;
}
