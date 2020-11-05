#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
//Used to resolve reciprocal include problem

class Form
{
private:
  class GradeTooHighException : public std::exception //Not caught exceptions get handled by exception parent class that contains virtual member function called what
  {
  public:
    int warning;
    const char* what() const _NOEXCEPT; //Virtual function from std::exception lib that we override with own exception message
  };
  class GradeTooLowException : public std::exception //Not caught exceptions get handled by exception parent class that contains virtual member function called what
  {
  public:
    int warning;
    const char* what() const _NOEXCEPT; //Virtual function from std::exception lib that we override with own exception message
  };
  int ExceptionGrade(int grade);
  bool ExceptionGrade(int grade, int minimum_grade);
  const std::string name;
  bool signe;
  const int grade_sign;
  const int grade_exec;
public:
  Form(std::string const &_name, int _grade_sign, int _grade_exec);
  ~Form() {}
  Form(const Form &to_copy);
  void operator=(const Form &to_copy);

  std::string const &getName() const;
  bool getSigne() const;
  int getGrade_sign() const;
  int getGrade_exec() const;

  void beSigned(Bureaucrat const &B);

};

void operator<<(std::ostream &stream, Form &F);

#endif
