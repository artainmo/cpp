#include <string>
#include <iostream>

#define P(X) std::cout << X << std::endl;

template<typename T>
void swap(T &v1,T &v2)
{
  T tmp;

  tmp = v1;
  v1 = v2;
  v2 = tmp;
}

template<typename T>
T min(T const &v1, T const &v2)
{
  if (v1 >= v2)
    return v2;
  else
    return v1;
}

template<typename T>
T max(T const &v1, T const &v2)
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

  P("Before swap")
  P(i);
  P(i1)
  swap(i, i1);
  P("After swap")
  P(i);
  P(i1)
  P("Before swap")
  P(c);
  P(c1)
  swap(c, c1);
  P("After swap")
  P(c);
  P(c1)
  P("Before swap")
  P(f);
  P(f1)
  swap(f, f1);
  P("After swap")
  P(f);
  P(f1)
  P("Before swap")
  P(d);
  P(d1)
  swap(d, d1);
  P("After swap")
  P(d);
  P(d1)
  P("Min")
  P(min(i, i1));
  P(min(c, c1));
  P(min(f, f1));
  P(min(d, d1));
  P("Max")
  P(max(i, i1));
  P(max(c, c1));
  P(max(f, f1));
  P(max(d, d1));
}
