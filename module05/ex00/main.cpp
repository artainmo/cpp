#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat *bob = new Bureaucrat(42, "Bob");
  Bureaucrat *Jack = new Bureaucrat(170, "Jack");
  std::cout << *Jack;
  Bureaucrat *John = new Bureaucrat(0, "John");
  std::cout << *John;

  (void)Jack; //unused variable
  (void)John; //unused variable
  std::cout << *bob;
  for (int i = 0; i < 111; i++)
    bob->Decrement();
  std::cout << *bob;
  for (int i = 0; i < 154; i++)
    bob->Increment();
  std::cout << *bob;
}

//Highest grade is 1 and lowest grade is 150!!
