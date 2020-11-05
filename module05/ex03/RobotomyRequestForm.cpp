#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm::RobotomyRequestForm(std::string const &_target)
:Form("RobotomyRequestForm", 72, 45), target(_target) {}

void RobotomyRequestForm::Action() const
{
  int i;

  srand(time(NULL)); // initialize random seed, otherwise not random
  i = rand() % 2 + 0;  //generate a number between 0 and 1
  std::cout << "Drill... DRill... DRIll... DRILl... DRILL... DRILL!" << std::endl;
  if (i)
    std::cout << target << " has been robotomized successfully" << std::endl;
  else
    std::cout << target << " failure, has not been robotomized" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &to_copy)
:Form("RobotomyRequestForm", 72, 45), target(to_copy.getTarget()) {}

std::string const &RobotomyRequestForm::getTarget() const
{
  return target;
}
