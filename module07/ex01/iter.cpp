#include <iostream>

template<typename T>
void iter(T *array, unsigned int lenght, void (*function_pointer)(T const &)) //First param is address of array, second lenght array and last pointer to function
{
  for (unsigned int i = 0; i < lenght; i++)
    function_pointer(array[i]);
}


///////////////////////////////////////Personal main
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
//////////////////////////////////////

//////////////////////////////////////Correction pdf given main, it demands to have pointer function first parameter as const &, makes sense as it works with all function pointer parameters
// class Awesome
// {
// private:
//   int _n;
// public:
//   Awesome( void ) : _n( 42 ) { return; }
//   int get( void ) const { return this->_n; }
// };
//
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
//
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }
//
// int main()
// {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];
//
//   iter(tab, 5, print);
//   iter(tab2, 5, print);
//   return 0;
// }
//////////////////////////////////////
