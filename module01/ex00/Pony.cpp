#include "Pony.hpp"


Pony::Pony(std::string name, std::string height, std::string lenght, std::string weight, std::string speed) //Object constructor
:name(name), height(height), lenght(lenght), weight(weight), speed(speed)
{
  std::cout << "Creation of pony" << std::endl;
}

Pony::~Pony() //Object destructor
{
  std::cout << "End of Pony\n" << std::endl;
}

void Pony::show_content()
{
  std::cout << "Name: " << name << std::endl;
  std::cout << "Height: " << height << std::endl;
  std::cout << "Lenght: " << lenght << std::endl;
  std::cout << "Weight: " << weight << std::endl;
  std::cout << "Speed: " << speed << std::endl;
}

void ponyOnTheHeap()
{
  Pony *pony_heap = new Pony("Pony", "12", "111", "34", "54");

  std::cout << "HEAP"<< std::endl;
  pony_heap->show_content();
  delete pony_heap;
}
//Free the object that sits on the heap

void ponyOnTheStack()
{
  Pony pony_stack = Pony("Pony", "12", "111", "34", "54");

  std::cout << "STACK"<< std::endl;
  pony_stack.show_content();
}
//Do not free static object as it gets destroyed automatically when going out of scope function
