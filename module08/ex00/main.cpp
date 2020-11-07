#include "easyfind.hpp"

template<typename T>
bool easyfind(T cont, int to_find)
{
  typename T::iterator ptr; //They all have iterator objects to iterate overtheir content more easily. Typename is demanded by compiler

  try
  {
    ptr = std::find(cont.begin(), cont.end(), to_find); //Takes and returns iterators
    if (ptr == cont.end() && *(cont.end()) != to_find)
      throw elem_not_found<int, T>(to_find, cont);
    else
      std::cout << to_find << " found at position " << ptr - cont.begin() + 1 << std::endl;
  }
  catch (elem_not_found<int, T> &e)
  {
    e.what();
    return false;
  }
  return true;
}

int main()
{
  std::array<int, 5> arr = {0,1,2,3,4}; //Use STL(standard template lirary) objects, they allow you to create easy to use lists

  std::cout << easyfind(arr, 0) << std::endl;
  std::cout << easyfind(arr, 2) << std::endl;
  std::cout << easyfind(arr, 4) << std::endl;
  std::cout << easyfind(arr, 88) << std::endl;
  std::cout << easyfind(arr, -22) << std::endl;
}
