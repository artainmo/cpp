#include "span.hpp"

Span::Span(unsigned int _size)
: size(_size)
{
  arr.reserve(_size);
}

void Span::addNumber(int n)
{
  try
  {
    if (arr.size() < size)
      arr.push_back(n);
    else
      throw out_of_range();
  }
  catch(out_of_range &e)
  {
    e.detail();
  }
}

void Span::addRange(unsigned int begin, unsigned int end)
{
  for (unsigned int i = begin; i <= end; i++)
    arr.push_back(i);
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
    e.detail();
    return (-1);
  }
  std::sort(arr.begin(), arr.end());
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
    e.detail();
    return (-1);
  }
  std::sort(arr.begin(), arr.end());
  return(arr.at(size - 1) - arr.at(0));
}
