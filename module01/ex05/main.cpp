#include "Brain.hpp"
#include "Human.hpp"

int main()
{
  Human bob;

  std::cout << bob.identify() << std::endl;
  std::cout << bob.getBrain().identify() << std::endl;
}
//Usually c++ functions returns copies of objects but not the objects themselves (on same memory address), to return the object itself with same memory address use the reference
//Sending copies is slower than sending the address itself, so (const &variable) to take in addresses with promise of not changing the value can be used instead
