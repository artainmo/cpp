#include "Pony.hpp"


Pony::Pony(std::string name, std::string height, std::string lenght, std::string weight, std::string speed)
:name(name), height(height), lenght(lenght), weight(weight), speed(speed)
{
  std::cout << "Creation of pony" << std::endl;
}

Pony::~Pony()
{
  std::cout << "End of Pony" << std::endl;
}

void ponyOnTheHeap()
{
  Pony *pony_heap = new Pony("Pony", "12", "111", "34", "54");

  std::cout << "HEAP"<< std::endl << pony_heap->weight << std::endl;
  delete pony_heap;
}

void ponyOnTheStack()
{
  Pony pony_stack = Pony("Pony", "12", "111", "34", "54");

  std::cout << "STACK" << std::endl << pony_stack.weight <<std::endl;
}
