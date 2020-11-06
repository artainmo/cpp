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

template<typename T, typename T2>
void write(Array<T> &obj, T2 const &array, int size)
{
  for (int i = 0; i < size; i++)
    obj[i] = array[i];
}

int main() //Verify deep copy
{
  Array<int> *a1 = new Array<int>(); //When initializing integers, float or double in c++, they will automatically be set to zero
  Array<int> *a2 = new Array<int>(10);
  Array<float> *a3 = new Array<float>();
  Array<float> *a4 = new Array<float>(10);
  float w[4] = {1, 2, 3, 4};
  Array<char> *a5 = new Array<char>(); //Chars are also set to zero, thus through ascii values they are not visible in stdoutput
  Array<char> a6(10);
  Array<std::string> *a7 = new Array<std::string>(); //Chars are also set to zero, thus through ascii values they are not visible in stdoutput
  Array<std::string> *a8 = new Array<std::string>(10);

  P("~~Verify const type not able to write to it~~"); //Should create compilation time error, set in comment to continue with main
  const Array<int> c(10); //Const classes only enter member-function that end with const keyword, you can create a member-function overload based on this end keyword, so you have control over the return type of functions for const or non-const classes
  std::cout << c[0] << std::endl;
  c[0] = 6;
  std::cout << c[0] << std::endl;
  P("~~Integers~~");
  std::cout << a1->size() << std::endl;
  show(*a1, a1->size());
  std::cout << a2->size() << std::endl;
  show(*a2, a2->size());
  P("~~Floats, write in it~~");
  std::cout << a3->size() << std::endl;
  show(*a3, a3->size());
  write(*a4, w, 4);
  std::cout << a4->size() << std::endl;
  show(*a4, a4->size());
  P("~~Char, write in it~~");
  std::cout << a5->size() << std::endl;
  show(*a5, a5->size());
  write(a6, std::string("hello world"), 10);
  std::cout << a6.size() << std::endl;
  show(a6, a6.size());
  P("~~Complex type, write in it~~");
  std::cout << a7->size() << std::endl;
  show(*a7, a7->size());
  write(*a8, std::string("hello world"), 10);
  std::cout << a8->size() << std::endl;
  show(*a8, a8->size());
  P("~~Setting empty integer array equal to size10 integer array, with deep copy~~"); //Arrays of different types cannot be copied error at compilation
  *a1 = *a2;
  std::cout << a1->size() << std::endl;
  show(*a1, a1->size());
  P("~~Going  out of range~~"); ; //!!!!!!!!!!!!OUT OF RANGE SEGFAULT CALL PUT IN COMMENT TO SEE END
  show(*a1,a1->size() + 1);
  show(*a4,a4->size() + 2);
  write(*a8, std::string("hello world"), 11);
  std::cout << a6[-1];
  P("~~Delete all~~"); //If copy was not deep, delete of both a1 and a2 would not be possible as they delete their array in deconstructor
  delete a1;
  delete a2;
  delete a3;
  delete a4;
  delete a5;
  delete a7;
  delete a8;
}
