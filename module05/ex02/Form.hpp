#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
//To resolve the reciprocal include problem

class Form
{
private:
  const std::string name;
  bool signe;
  const int grade_sign;
  const int grade_exec;

protected:
  class GradeTooHighException : public std::exception
  {
  public:
    int grade;
    GradeTooHighException() {}
    void detail() const;
  };
  class GradeTooLowException : public std::exception
  {
  public:
    int grade;
    GradeTooLowException() {}
    void detail() const;
  };
  class UnsignedException : public std::exception
  {
  public:
    int grade;
    UnsignedException() {}
    void detail() const;
  };

public:
  Form(std::string const &_name, int _grade_sign,int _grade_exec);
  ~Form() {}

  std::string const &getName() const;
  bool getSigne() const;
  int getGrade_sign() const;
  int getGrade_exec() const;

  void beSigned(Bureaucrat const &B);
  virtual bool execute(Bureaucrat const & executor) const = 0;

};

void operator<<(std::ostream &stream, Form &F);

#endif
