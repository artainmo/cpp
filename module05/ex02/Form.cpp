#include "Form.hpp"

Form::Form(std::string const &_name, int _grade_sign, int _grade_exec)
: name(_name), signe(false), grade_sign(ExceptionGrade(_grade_sign)), grade_exec(ExceptionGrade(_grade_exec)) {}

void operator<<(std::ostream &stream, Form &F)
{
  stream << "The form " << F.getName();
  if (F.getSigne() == true)
    stream << " is signed, ";
  else
    stream << " is not signed, ";
  stream << "grade to sign: " << F.getGrade_sign() << ", grade to execute: " << F.getGrade_exec() << std::endl;
}

std::string const &Form::getName() const
{
  return (name);
}

bool Form::getSigne() const
{
  return (signe);
}

int Form::getGrade_sign() const
{
  return(grade_sign);
}

int Form::getGrade_exec() const
{
  return(grade_exec);
}

void Form::beSigned(Bureaucrat const &B)
{
  if (ExceptionGrade(B.getGrade(), grade_sign))
  {
      signe = true;
      B.signForm(true, name);
  }
  else
    B.signForm(false, name);
}

int Form::ExceptionGrade(int new_grade) const
{
  try //Try scope contains throw keyword, throw keyword is followed by parameter and linked with catch scope that contains same parameter, in catch scope you can set what you want but usually if exception class is used, its error output function is used
  {
    if (new_grade > 150)
      throw GradeTooLowException();
    else if (new_grade < 1)
      throw GradeTooHighException();
    return new_grade;
  }
  catch (std::exception &e) //Is catchable by std::exception, as it has the std::exception as parent
  {
    e.what();
    return 1; //If invalid grade set to one so that it does not get executed or signed when it should not
  }
}

bool Form::ExceptionGrade(int grade, int minimum_grade) const
{
  try
  {
    if (grade > minimum_grade)
      throw GradeTooLowException();
  }
  catch (std::exception &e)
  {
    e.what();
    return false;
  }
  return true;
}

bool Form::ExceptionUnsigned() const
{
  try
  {
    if (!signe)
      throw UnsignedException();
  }
  catch (std::exception &e)
  {
    e.what();
    return false;
  }
  return true;
}

const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
  std::cout << "Grade not in range exception: too low" << std::endl;
  return (0);
}

const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
  std::cout << "Grade not in range exception: too high" << std::endl;
  return (0);
}

const char *Form::UnsignedException::what() const _NOEXCEPT
{
  std::cout << "Not able to execute unsigned exception" << std::endl;
  return (0);
}

Form::Form(const Form &to_copy)
: name(to_copy.getName()), grade_sign(to_copy.getGrade_sign()), grade_exec(to_copy.getGrade_exec())
{
  *this = to_copy;
}

void Form::operator=(const Form &to_copy)
{
  signe = to_copy.getSigne(); //All the rest are constant members and cannot be changed value after initiliazation
}

int Form::execute(Bureaucrat const & executor) const
{
  if (!ExceptionGrade(executor.getGrade(), grade_exec))
    return 1;
  else if (!ExceptionUnsigned())
    return 3;
  Action();
  return 0;
}
