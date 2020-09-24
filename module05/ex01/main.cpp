#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
  Form *paper = new Form("paperwork", 57, 23);
  std::cout << *paper;
  Form *paper1 = new Form("paperwork", 157, 23);
  std::cout << *paper1;
  Form *paper2 = new Form("paperwork", 0, 23);
  std::cout << *paper2;
  Bureaucrat *bob = new Bureaucrat(42, "Bob");
  std::cout << *bob;
  Bureaucrat *Jack = new Bureaucrat(145, "Jack");
  std::cout << *Jack;

  paper->beSigned(*Jack);
  paper->beSigned(*bob);
}

//0 is too high grade and 150+ is too low grade!
