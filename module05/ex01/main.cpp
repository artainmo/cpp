#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
  Form *paper = new Form("paperwork", 57, 23);
  std::cout << *paper;
  Form *paper1 = new Form("paperwork1", 157, 23); //If out of range grade it is set to 1 so no one that should not can sign it
  std::cout << *paper1;
  Form *paper2 = new Form("paperwork2", 23, 0);
  std::cout << *paper2;
  Form *paper3 = new Form("paperwork3", 444, 0);
  std::cout << *paper3;
  Bureaucrat *bob = new Bureaucrat(57, "Bob");
  std::cout << *bob;
  Bureaucrat *Jack = new Bureaucrat(145, "Jack");
  std::cout << *Jack;

  paper->beSigned(*Jack);
  std::cout << *paper;
  paper->beSigned(*bob);
  std::cout << *paper;

  delete paper;
  delete paper1;
  delete paper2;
  delete paper3;
  delete bob;
  delete Jack;
}

//0 is too high grade and 150+ is too low grade!
