#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
//To resolve the reciprocal include problem

class Form
{
private:
  class GradeTooHighException : public std::exception
  {
  public:
    const char* what() const _NOEXCEPT;
  };
  class GradeTooLowException : public std::exception
  {
  public:
    const char* what() const _NOEXCEPT;
  };
  class UnsignedException : public std::exception
  {
  public:
    const char* what() const _NOEXCEPT;
  };
  int ExceptionGrade(int grade) const;
  bool ExceptionGrade(int grade, int minimum_grade) const;
  bool ExceptionUnsigned() const;
  const std::string name;
  bool signe;
  const int grade_sign;
  const int grade_exec;
public:
  Form(std::string const &_name, int _grade_sign, int _grade_exec);
  virtual ~Form() {}
  Form(const Form &to_copy);
  void operator=(const Form &to_copy);

  std::string const &getName() const;
  bool getSigne() const;
  int getGrade_sign() const;
  int getGrade_exec() const;

  void beSigned(Bureaucrat const &B);

  int execute(Bureaucrat const & executor) const;
  virtual void Action() const = 0; //Pure virtual function, because in execute function action function is used thus must exist in child

};

void operator<<(std::ostream &stream, Form &F);

#endif
