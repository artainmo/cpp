#include "Pony.hpp"

int main()
{
  ponyOnTheHeap();
  std::cout << "Explanation:" << std::endl;
  std::cout << "Delete is used to free the heap memory allocated object so that the object gets destroyed\n" << std::endl;
  ponyOnTheStack();
  std::cout << "Explanation:" << std::endl;
  std::cout << "Stack object gets destroyed once it goes out of function scope\n" << std::endl;
}
