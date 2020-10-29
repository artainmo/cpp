#include <iostream>

void memoryLeak()
{
  std::string *panther = new std::string("String panther");

  std::cout << *panther << std::endl;
  delete panther;
}
//Fix mem leak by delete (freeing memory) of heap allocated object

int main()
{
  memoryLeak();
}
