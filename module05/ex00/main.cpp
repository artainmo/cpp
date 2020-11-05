#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat *bob = new Bureaucrat(42, "Bob");
  std::cout << *bob;
  Bureaucrat *bob1 = new Bureaucrat(150, "Bob1");
  std::cout << *bob1;
  Bureaucrat *bob2 = new Bureaucrat(1, "Bob2");
  std::cout << *bob2;
  Bureaucrat *Jack = new Bureaucrat(170, "Jack"); //Invalid grades are set to lowest grade 150
  std::cout << *Jack;
  Bureaucrat *John = new Bureaucrat(0, "John"); //Invalid grades are set to lowest grade 150
  std::cout << *John;
  Bureaucrat *Georges = new Bureaucrat(-19, "Georges"); //Invalid grades are set to lowest grade 150
  std::cout << *Georges;

  P("Decrementing bob's grade 111times");
  for (int i = 0; i < 111; i++)
    bob->Decrement();
  std::cout << *bob;
  P("Incrementing bob's grade 154times");
  for (int i = 0; i < 154; i++)
    bob->Increment();
  std::cout << *bob;

  delete bob;
  delete bob1;
  delete bob2;
  delete Jack;
  delete John;
  delete Georges;
}

//Highest grade is 1 and lowest grade is 150!!
