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
  std::vector<int> arr;
  //vector is a perturbing name, it is not a mathematical vector, it simply is  a dynamic array
  //std::vectors do not need to be initialized with a certain size from begin contrary to std::array
  //std::array will keep a constant/static size, while vector is an  array with a dynamic size, stored in heap
  //Each time you want to change size of vector new memory gets allocated and intial vector gets printed to new and deleted
  class out_of_range : public std::exception
  {
  public:
    out_of_range() {}
    void detail() {std::cout << "Out of range exception" << std::endl;}
  };
  class no_span : public std::exception
  {
  public:
    no_span() {}
    void detail() {std::cout << "Array size is too small for a span" << std::endl;}
  };

public:
  Span(unsigned int _size);
  ~Span() {}

  void addNumber(int n);
  void addRange(unsigned int begin, unsigned int end);
  int shortestSpan();
  int longestSpan();
};

#endif
