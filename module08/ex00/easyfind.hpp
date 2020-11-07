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
  const char *what() const _NOEXCEPT
  {
    std::cout << elem << " not found" <<  std::endl;
    return 0;
  }
};

#endif
