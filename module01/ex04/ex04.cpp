#include <iostream>

int main()
{
  std::string str = "HI THIS IS BRAIN";
  std::string *pointer;
  std::string &reference = str;
  std::string regular = str;

  pointer = &str;
  std::cout << "Pointer : " << *pointer << std::endl;
  std::cout << "Reference : " << reference << std::endl;
  std::cout << "Regular : " << regular << std::endl;
}
