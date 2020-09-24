#include "Form.hpp"

Form::Form(std::string const &_name, int _grade_sign,int _grade_exec)
:Bureaucrat(), name(_name), signe(false), grade_sign(_grade_sign), grade_exec(_grade_exec)
{
  try
  {
    if (grade_sign > 150)
      throw GradeTooLowException(grade_sign);
    else if (grade_sign < 1)
      throw GradeTooHighException(grade_sign);
  }
  catch (GradeTooLowException &e)
  {
    e.detail();
  }
  catch(GradeTooHighException &e)
  {
    e.detail();
  }

}

void operator<<(std::ostream &stream, Form &F)
{
  stream << "The form " << F.getName();
  if (F.getSigne() == true)
    stream << " is signed, ";
  else
    stream << " is not signed, ";
  stream << "grade to sign: " << F.getGrade_sign() << ", grade to execute: " << F.getGrade_exec() << std::endl;
}

std::string const &Form::getName()
{
  return (name);
}

bool Form::getSigne()
{
  return (signe);
}

int Form::getGrade_sign()
{
  return(grade_sign);
}

int Form::getGrade_exec()
{
  return(grade_exec);
}

void Form::beSigned(Bureaucrat const &B)
{
  try
  {
    if (B.getGrade() <= grade_sign)
    {
      signe = true;
      B.signForm(true, name);
    }
    else
      throw GradeTooLowException(B.getGrade());
  }
  catch(GradeTooLowException &e)
  {
    e.detail();
    B.signForm(false, name);
  }
}
