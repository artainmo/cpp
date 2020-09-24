#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::Action() const
{
  std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
