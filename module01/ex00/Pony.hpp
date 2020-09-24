#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

void ponyOnTheHeap();
void ponyOnTheStack();

class Pony
{
public:
  std::string name;
  std::string height;
  std::string lenght;
  std::string weight;
  std::string speed;

  Pony(std::string name, std::string height, std::string lenght, std::string weight, std::string speed);
  ~Pony();
};


#endif
