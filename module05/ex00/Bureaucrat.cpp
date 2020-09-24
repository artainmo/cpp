#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(int _grade, std::string const &_name)
:name(_name)
{
  ExceptionGrade(_grade);
}


const std::string &Bureaucrat::getName() const
{
  return (name);
}

int Bureaucrat::getGrade() const
{
  return (grade);
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


void Bureaucrat::ExceptionGrade(int new_grade)
{
  try
  {
    if (new_grade > 150)
      throw GradeTooLowException(new_grade);
    else if (new_grade < 1)
      throw GradeTooHighException(new_grade);
    grade = new_grade;
  }
  catch (GradeTooHighException &e)
  {
    e.detail();
    grade = e.grade;;
  }
  catch (GradeTooLowException &e)
  {
    e.detail();
    grade = e.grade;;
  }
}

void Bureaucrat::GradeTooHighException::detail() const
{
  std::cout << "Grade too high exception" << std::endl;
}

void Bureaucrat::GradeTooLowException::detail() const
{
  std::cout << "Grade too low exception" << std::endl;
}
