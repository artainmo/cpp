#include "easyfind.hpp"

int main()
{
  std::array<int, 5> arr = {0,1,2,3,4};
  int i = 2;
  int i1 = 4;
  int i2 = 88;

  easyfind(arr, i);
  easyfind(arr, i1);
  easyfind(arr, i2);
}
