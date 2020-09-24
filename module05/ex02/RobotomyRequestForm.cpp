#include "RobotomyRequestForm.hpp"

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

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
  try
  {
    if (getSigne() == true)
    {
      if (executor.getGrade() <= getGrade_exec())
      {
        Action();
        return true;
      }
      else
        throw GradeTooLowException();
    }
    else
      throw UnsignedException();
  }
  catch (GradeTooLowException &e)
  {
    e.detail();
  }
  catch (UnsignedException &e)
  {
    e.detail();
  }
  return false;
}
