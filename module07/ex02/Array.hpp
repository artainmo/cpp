#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>
#include <csignal>

#define P(X) std::cout << X << std::endl;

//With templates you need to put the function declaration and function itself in the same file in this case the header file
//Because templates are like defines, whereby code will be changed and written for you, T will be tranformed into the type you asked for

template<typename T>
class Array
{
private:
  T *arr;
  unsigned int length;
  class out_of_range : std::exception
  {
  public:
    const char* what() const _NOEXCEPT;
  };
public:
  Array(): arr(nullptr), length(0) {}
  ~Array();
  Array(unsigned int n);
  Array(Array const &to_copy);
  void operator=(Array const &to_copy);

  T &operator[](int n); //Used by non-const classes
  const T &operator[](int n) const; //Used by const classes, by returning a constant value creates compilation error when trying to change value
  unsigned int size() const;

};

template<typename T>
Array<T>::~Array()
{
  delete [] arr; //Delete all the elements, deleting null creates no error
}

template<typename T>
Array<T>::Array(unsigned int n)
{
  length = n;
  arr = new T[n];
}

template<typename T>
Array<T>::Array(Array const &to_copy)
:arr(nullptr), length(0)
{
  *this = to_copy;
}

template<typename T>
void Array<T>::operator=(Array const &to_copy) //Creation of deepcopy or copy on a separate memory address
{
  if (arr != nullptr)
    delete [] arr;
  arr = new T[to_copy.length];
  for (unsigned int i = 0; i < to_copy.length ; i++)
    arr[i] = to_copy.arr[i];
  length = to_copy.length;
}

template<typename T>
T &Array<T>::operator[](int n)
{
  try
  {
    if (n < 0 || (unsigned int)n >= length)
      throw out_of_range();
  }
  catch (out_of_range &e)
  {
    e.what();
    raise(SIGSEGV);
  }
  return (arr[n]);
}

template<typename T>
const T &Array<T>::operator[](int n) const
{
  try
  {
    if (n < 0 || (unsigned int)n >= length)
      throw out_of_range();
  }
  catch (out_of_range &e)
  {
    e.what();
    raise(SIGSEGV);
  }
  return (arr[n]);
}

template<typename T>
unsigned int Array<T>::size() const
{
  return (length);
}

template<typename T>
const char *Array<T>::out_of_range::what() const _NOEXCEPT
{
  std::cout << "Exception for out of range array... Calling SIGSEGV!\n";
  return 0;
}

#endif
