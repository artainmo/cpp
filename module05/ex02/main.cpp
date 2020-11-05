#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  ShrubberyCreationForm *test = new ShrubberyCreationForm("test1");
  std::cout << *test;
  RobotomyRequestForm *test1 = new RobotomyRequestForm("test2");
  std::cout << *test1;
  PresidentialPardonForm *test2 = new PresidentialPardonForm("test3");
  std::cout << *test2;
  Bureaucrat *bob = new Bureaucrat(2, "Bob");
  Bureaucrat *Jack = new Bureaucrat(148, "Jack");

  std::cout << *bob;
  std::cout << *Jack;
  std::cout << "~Trying to execute an unsigned form" << std::endl;
  bob->executeForm(*test);

  std::cout << "~Low grade jack trying to sign forms" << std::endl;
  test->beSigned(*Jack);
  test1->beSigned(*Jack);
  test2->beSigned(*Jack);

  std::cout << "~Signing all the forms" << std::endl;
  test->beSigned(*bob);
  test1->beSigned(*bob);
  test2->beSigned(*bob);

  std::cout << "~Low grade jack trying to execute forms" << std::endl;
  Jack->executeForm(*test);
  Jack->executeForm(*test1);
  Jack->executeForm(*test2);

  std::cout << "~High grade bob trying to execute forms" << std::endl;
  bob->executeForm(*test);
  bob->executeForm(*test1);
  bob->executeForm(*test2);

  delete test;
  delete test1;
  delete test2;
  delete bob;
  delete Jack;
}
