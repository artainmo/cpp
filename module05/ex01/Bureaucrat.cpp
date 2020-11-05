#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int _grade, std::string const &_name)
:name(_name), grade(150)
{
  ExceptionGrade(_grade);
  //If exception occurs grade is initialized to lowest 150 grade
}

const std::string &Bureaucrat::getName() const
{
  return (name);
}

int Bureaucrat::getGrade() const
{
  return (grade);
}

void Bureaucrat::setGrade(int _grade)
{
  grade = _grade;
}

void Bureaucrat::Increment()
{
  ExceptionGrade(grade - 1);
}

void Bureaucrat::Decrement()
{
  ExceptionGrade(grade + 1);
}

void operator<<(std::ostream &stream, Bureaucrat const &B)
{
    stream << B.getName() << " bureaucrat grade " << B.getGrade() << "." << std::endl;
}

//Sets new grade and verifies if in range
void Bureaucrat::ExceptionGrade(int new_grade)
{
  try //Try scope contains throw keyword, throw keyword is followed by parameter and linked with catch scope that contains same parameter, in catch scope you can set what you want but usually if exception class is used, its error output function is used
  {
    if (new_grade > 150)
      throw GradeTooLowException();
    else if (new_grade < 1)
      throw GradeTooHighException();
    grade = new_grade;
  }
  catch (std::exception &e) //Is catchable by std::exception, as it has the std::exception as parent
  {
    e.what();
  }
}

const char *Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
  std::cout << "Grade not in range exception: too low" << std::endl;
  return (0);
}

const char *Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
  std::cout << "Grade not in range exception: too high" << std::endl;
  return (0);
}

Bureaucrat::Bureaucrat(const Bureaucrat &to_copy)
{
  *this = to_copy;
}

void Bureaucrat::operator=(const Bureaucrat &to_copy) //Name must stay const
{
  setGrade(to_copy.getGrade());
}


void Bureaucrat::signForm(Form const &form) const
{
  if (form.getSigne() == true)
    std::cout << name << " signed the following form: " << form.getName() << std::endl;
  else
    std::cout << name << " cannot sign the following form: " << form.getName() << " because his grade is too low" << std::endl;
}
