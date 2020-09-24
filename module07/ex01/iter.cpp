#include <iostream>

template<typename T>
void iter(T *array, unsigned int lenght, void (*function_pointer)(T &))
{
  for (unsigned int i = 0; i < lenght; i++)
    function_pointer(array[i]);
}

template<typename T>
void write(T arg)
{
  std::cout << arg << std::endl;
}

int main()
{
  int v1[5] = {1,2,3,4,5};
  char v2[12] = "Hello World";
  float v3[5] = {1.0f,2.0f,3.0f,4.0f,5.0f};
  double v4[5] = {1.0,2.0,3.0,4.0,5.0};

  write("int array");
  iter(v1, 5, write);
  write("char array");
  iter(v2, 11, write);
  write("float array");
  iter(v3, 5, write);
  write("double array");
  iter(v4, 5, write);

}
