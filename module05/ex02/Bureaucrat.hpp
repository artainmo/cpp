#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

#include "Form.hpp"

class Form;
//To resolve the reciprocal include problem

class Bureaucrat
{
private:
  std::string const name;
  int grade;

protected:
  class GradeTooHighException : public std::exception
  {
  public:
    int grade;
    GradeTooHighException(int _grade): grade(_grade) {}
    void detail() const;
  };
  class GradeTooLowException : public std::exception
  {
  public:
    int grade;
    GradeTooLowException(int _grade): grade(_grade) {}
    void detail() const;
  };

public:
  Bureaucrat() {}
  Bureaucrat(int grade, std::string const &name);
  ~Bureaucrat() {}
  const std::string &getName() const;
  int getGrade() const;
  void Increment();
  void Decrement();
  void ExceptionGrade(int new_grade);

  void signForm(bool signe, std::string const &name) const;
  void executeForm(Form const & form) const;
};

void operator<<(std::ostream &stream, Bureaucrat const &B);

#endif
