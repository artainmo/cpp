#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
public:
  Intern() {}
  ~Intern() {}
  Form *makeForm(std::string const &form_name, std::string const &form_target);

private:
  typedef struct s_forms
  {
    std::string name;
    Form *(*function_pointer)(std::string const &form_target);
    //Function pointers, takes the adress of a function
    //consist first of the return type of the function pointed to, second to the name of the function pointer and third to its arguments
    //Possible to allocate struct in c++, because it works similar to a class, in the stack memory or heap, with direct access to the different structs through an index
  } t_forms;
};

#endif
