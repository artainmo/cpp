#include "Intern.hpp"

Form *makePresidentialForm(std::string const &form_target)
{
  return (new PresidentialPardonForm(form_target));
}

Form *makeRobotomyRequestForm(std::string const &form_target)
{
  return (new RobotomyRequestForm(form_target));
}

Form *makeShrubberyCreationForm(std::string const &form_target)
{
  return (new ShrubberyCreationForm(form_target));
}

Form *Intern::makeForm(std::string const &form_name, std::string const &form_target)
{
  //Structures takes in name and appropriate function pointer to create the form
  t_forms forms[3] = {{"shrubbery creation", &makeShrubberyCreationForm}, {"robotomy request", &makeRobotomyRequestForm}, {"presidential pardon", &makePresidentialForm}};

  for (int i = 0; i < 3; i++) //We loop throug the struct using an index (possible in c++)
  {
    if (forms[i].name == form_name)
    {
      std::cout << "Intern creates " << form_name << " form" <<std::endl;
      return (forms[i].function_pointer(form_target)); //calling the function pointer and returning the object it creates
    }
  }
  std::cout << "Requested form not found:" << form_name << std::endl;
  return (nullptr);
}
