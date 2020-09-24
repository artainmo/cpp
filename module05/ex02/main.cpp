#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  ShrubberyCreationForm *test = new ShrubberyCreationForm("tar");
  RobotomyRequestForm *test1 = new RobotomyRequestForm("tar");
  PresidentialPardonForm *test2 = new PresidentialPardonForm("tar");
  Bureaucrat *bob = new Bureaucrat(2, "Bob");
  Bureaucrat *Jack = new Bureaucrat(148, "Jack");

  std::cout << *bob;
  std::cout << *Jack;
  std::cout << "~Trying to execute an unsigned form" << std::endl;
  Jack->executeForm(*test);
  

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
}
