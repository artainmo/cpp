#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cctype>
#include <sstream>
#include <unistd.h>

#define P(x) std::cout << x << std::endl;

struct Data {
  std::string s1;
  std::string s2;
  int n;
};

#endif
