#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <stdlib.h> // srand, rand
#include <time.h> // time

class RobotomyRequestForm : public Form
{
private:
  std::string const target;
public:
  RobotomyRequestForm(std::string const &_target) : Form("RobotomyRequestForm", 72, 45), target(_target) {}
  ~RobotomyRequestForm() {}

  void Action() const;
  bool execute(Bureaucrat const & executor) const;
};

#endif
