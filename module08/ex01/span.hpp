#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
private:
  unsigned int size;
  std::vector<int> arr; //We use the stl container with the most options, so that it can directly so what the Array container needs to do
  //vector is a perturbing name, it is not a mathematical vector, it simply is  a dynamic array
  //std::vectors do not need to be initialized with a certain size from begin contrary to std::array
  //std::array will keep a constant/static size, while vector is an  array with a dynamic size, stored in heap
  //Each time you want to change size of vector new memory gets allocated and intial vector gets printed to new and deleted
  class out_of_range : public std::exception
  {
  public:
    const char *what() const _NOEXCEPT;
  };
  class no_span : public std::exception
  {
  public:
    const char *what() const _NOEXCEPT;
  };

public:
  Span(unsigned int _size);
  ~Span() {}
  Span(const Span &to_copy);
  void operator=(const Span &to_copy);

  void addNumber(int n);
  void addRange(unsigned int begin, unsigned int end);
  int shortestSpan();
  int longestSpan();

  unsigned int getSize();
  std::vector<int> getArray();
};

#endif
