#include "span.hpp"

Span::Span(unsigned int _size)
: size(_size)
{
  arr.reserve(_size);
}

Span::Span(const Span &to_copy)
{
  *this = to_copy;
}

void Span::operator=(const Span &to_copy)
{
  size = to_copy.size;
  arr = to_copy.arr; //Uses the std::vector assignation operator
}

void Span::addNumber(int n)
{
  try
  {
    if (arr.size() < size)
      arr.push_back(n); //Push_back is a function from the vector container
    else
      throw out_of_range();
  }
  catch(out_of_range &e)
  {
    e.what();
  }
}

void Span::addRange(unsigned int begin, unsigned int end)
{
  for (unsigned int i = begin; i <= end; i++)
    addNumber(i);
}

int Span::shortestSpan()
{
  int shortest;
  int rem;

  rem = -1;
  try
  {
    if (arr.size() <= 1)
      throw no_span();
  }
  catch(no_span &e)
  {
    e.what();
    return (-1);
  }
  std::sort(arr.begin(), arr.end()); //Sorts the array in non-descending order
  for (unsigned int i = 0; i + 1< size; i++)
  {
    shortest = (arr.at(i + 1)) - (arr.at(i));
    if (shortest < rem || rem == -1)
      rem = shortest;
  }
  return(rem);
}

int Span::longestSpan()
{
  try
  {
    if (arr.size() <= 1)
      throw no_span();
  }
  catch(no_span &e)
  {
    e.what();
    return (-1);
  }
  std::sort(arr.begin(), arr.end());
  return(arr.at(size - 1) - arr.at(0));
}

unsigned int Span::getSize()
{
  return size;
}

std::vector<int> Span::getArray()
{
  return arr;
}

const char *Span::out_of_range::what() const _NOEXCEPT
{
  std::cout << "Out of range exception" <<  std::endl;
  return 0;
}

const char *Span::no_span::what() const _NOEXCEPT
{
  std::cout << "Array size is too small for a span" <<  std::endl;
  return 0;
}
