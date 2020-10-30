#include <iostream>

int main()
{
  std::string str = "HI THIS IS BRAIN";
  std::string *pointer;
  std::string &reference = str; //Takes in same stack address without being a pointer
  std::string regular = str; //Creates a copy on another memory address

  pointer = &str;
  std::cout << "Pointer : " << *pointer << std::endl;
  std::cout << "Reference : " << reference << std::endl;
  std::cout << "Regular : " << regular << std::endl;
}
