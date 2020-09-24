#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <array>

template<typename T, typename T1>
class elem_not_found : std::exception
{
private:
  T elem;
  T1 cont;

public:
  elem_not_found(T _elem, T1 _cont): elem(_elem), cont(_cont) {}
  void detail()
  {
    std::cout << elem << " not found" <<  std::endl;
  }
};

template<typename T>
void easyfind(T cont, int to_find)
{
  typename T::iterator ptr;

  try
  {
    ptr = std::find(cont.begin(), cont.end(), to_find);
    if (ptr == cont.end() && *(cont.end()) != to_find)
      throw elem_not_found<int, T>(to_find, cont);
    else
      std::cout << to_find << " found at position " << ptr - cont.begin() + 1 << std::endl;
  }
  catch (elem_not_found<int, T> &e)
  {
    e.detail();
  }
}
//Function inside header because it is a template function

#endif
