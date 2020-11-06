#include <string>
#include <iostream>

#define P(X) std::cout << X << std::endl;

//Templates can take any types
//You need to define them at top function, after use in parameter and they will take in the given parameter's type

class Awesome { //Complex type test in correctin pdf
public:
  int _n;
  Awesome( int n ) : _n( n ) {}

  bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
  bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
  bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
  bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
  bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
  bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
};


template<typename T>
void swap(T &v1,T &v2)
{
  T tmp = v1; //Initialize directly to initialize classes with specific initializers

  tmp = v1;
  v1 = v2;
  v2 = tmp;
}

template<typename T> //Do not set as const because complex type / awesome class cannot become const
T min(T &v1, T &v2)
{
  if (v1 >= v2)
    return v2;
  else
    return v1;
}

template<typename T>
T max(T &v1, T &v2)
{
  if (v1 <= v2)
    return v2;
  else
    return v1;
}

int main()
{
  int i = 1;
  int i1 = 2;
  char c = 49;
  char c1 = 50;
  float f = 1;
  float f1 = 2;
  double d = 1;
  double d1 = 2;
  std::string s = "hello1";
  std::string s1 = "hello2";
  Awesome a(10);
  Awesome a1(20);

  P("~~Before swap: int~~")
  P(i);
  P(i1)
  swap(i, i1);
  P("~~After swap: int~~")
  P(i);
  P(i1)
  P("~~Before swap: char~~")
  P(c);
  P(c1)
  swap(c, c1);
  P("~~After swap: char~~")
  P(c);
  P(c1)
  P("~~Before swap: float~~")
  P(f);
  P(f1)
  swap(f, f1);
  P("~~After swap: float~~")
  P(f);
  P(f1)
  P("~~Before swap: double~~")
  P(d);
  P(d1)
  swap(d, d1);
  P("~~After swap: double~~")
  P(d);
  P(d1)
  P("~~Before swap: std::string~~")
  P(s);
  P(s1)
  swap(s, s1);
  P("~~After swap: std::string~~")
  P(s);
  P(s1)
  P("~~Before swap: complex type~~")
  P(a._n);
  P(a1._n);
  swap(a, a1);
  P("~~After swap: complex type~~")
  P(a._n);
  P(a1._n);
  P("~~Min~~")
  P(min(i, i1));
  P(min(c, c1));
  P(min(f, f1));
  P(min(d, d1));
  P(::min(s, s1)); //:: is used to indicate we want the max function from this namespace/file and not form the string lib
  P(min(a, a1)._n);
  P("~~Max~~")
  P(max(i, i1));
  P(max(c, c1));
  P(max(f, f1));
  P(max(d, d1));
  P(::max(s, s1));
  P(max(a, a1)._n);
}
