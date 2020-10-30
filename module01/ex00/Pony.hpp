#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

void ponyOnTheHeap();
void ponyOnTheStack();

class Pony
{
private:
  std::string name;
  std::string height;
  std::string lenght;
  std::string weight;
  std::string speed;

public:
  Pony(std::string name, std::string height, std::string lenght, std::string weight, std::string speed);
  ~Pony();

  void show_content();
};


#endif
