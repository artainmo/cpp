#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
  class GradeTooHighException : public std::exception //Not caught exceptions get handled
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
  std::string const name;
  int grade;
public:
  Bureaucrat(int grade, std::string const &name);
  ~Bureaucrat() {}
  const std::string &getName() const;
  int getGrade() const;
  void Increment();
  void Decrement();
  void ExceptionGrade(int new_grade);
};

void operator<<(std::ostream &stream, Bureaucrat const &B);

#endif
