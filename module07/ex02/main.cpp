#include "Array.hpp"
#include <string>

template<typename T>
void show(Array<T> const &obj, int size)
{
  if (size == 0)
  {
    std::cout << "empty array" << std::endl;
    return ;
  }
  for (int i = 0; i < size; i++)
    std::cout << obj[i];
  std::cout << std::endl;
}

int main()
{
  Array<int> *a1 = new Array<int>(); //When initializing integers, float or double in c++, they will automatically be set to zero
  Array<int> *a2 = new Array<int>(10);
  Array<float> *a3 = new Array<float>();
  Array<float> *a4 = new Array<float>(10);
  Array<float> *a5 = new Array<float>();
  Array<float> *a6 = new Array<float>(10);
  Array<char> *a7 = new Array<char>(); //Chars are also set to zero, thus through ascii values they are not visible in stdoutput
  Array<char> *a8 = new Array<char>(10);

  P("~~Integers~~");
  std::cout << a1->size() << std::endl;
  show(*a1, a1->size());
  std::cout << a2->size() << std::endl;
  show(*a2, a2->size());
  P("~~Floats~~");
  std::cout << a3->size() << std::endl;
  show(*a3, a3->size());
  std::cout << a4->size() << std::endl;
  show(*a4, a4->size());
  P("~~Double~~");
  std::cout << a5->size() << std::endl;
  show(*a5, a5->size());
  std::cout << a6->size() << std::endl;
  show(*a6, a6->size());
  P("~~Char~~");
  std::cout << a7->size() << std::endl;
  show(*a7, a7->size());
  std::cout << a8->size() << std::endl;
  show(*a8, a8->size());
  P("Initialized to zero too, not visible because of ASCII values");
  P("~~Setting empty integer array equal to size10 integer array, with deep copy~~"); //Different types of arrays equal to each other create compilation errors
  a1 = a2;
  std::cout << a1->size() << std::endl;
  show(*a1, a1->size());
  P("~~Going  out of range~~");
  show(*a1,a1->size() + 1);
}
