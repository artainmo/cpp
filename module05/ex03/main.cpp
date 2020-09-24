#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
  Intern *bil = new Intern();

  std::cout << *bil->makeForm("shrubbery creation", "TAR");
  std::cout << *bil->makeForm("robotomy request", "TAR");
  std::cout << *bil->makeForm("presidential pardon", "TAR");
}
