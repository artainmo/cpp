#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form : public Bureaucrat
{
private:
  const std::string name;
  bool signe;
  const int grade_sign;
  const int grade_exec;
public:
  Form(std::string const &_name, int _grade_sign,int _grade_exec);
  ~Form() {}

  std::string const &getName();
  bool getSigne();
  int getGrade_sign();
  int getGrade_exec();

  void beSigned(Bureaucrat const &B);

};

void operator<<(std::ostream &stream, Form &F);

#endif
