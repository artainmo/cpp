#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

#include "Form.hpp"

class Form;

#define P(x) std::cout << x << std::endl;

class Bureaucrat
{
private:
  class GradeTooHighException : public std::exception //Not caught exceptions get handled by exception parent class that contains virtual member function called what
  {
  public:
    const char* what() const _NOEXCEPT; //Virtual function from std::exception lib that we override with own exception message
  };
  class GradeTooLowException : public std::exception //Not caught exceptions get handled by exception parent class that contains virtual member function called what
  {
  public:
    const char* what() const _NOEXCEPT; //Virtual function from std::exception lib that we override with own exception message
  };
  void ExceptionGrade(int new_grade);
  std::string const name;
  int grade;

public:
  Bureaucrat(int grade, std::string const &name);
  ~Bureaucrat() {}
  Bureaucrat(const Bureaucrat &to_copy);
  void operator=(const Bureaucrat &to_copy);

  const std::string &getName() const;
  int getGrade() const;
  void setGrade(int _grade);
  void Increment();
  void Decrement();

  void signForm(Form const &form) const;
};

void operator<<(std::ostream &stream, Bureaucrat const &B);

#endif
