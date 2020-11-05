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
  RobotomyRequestForm(std::string const &_target);
  virtual ~RobotomyRequestForm() {}
  RobotomyRequestForm(const RobotomyRequestForm &to_copy);
  //No operator= because all variables are constant

  void Action() const;

  std::string const &getTarget() const;
};

#endif
