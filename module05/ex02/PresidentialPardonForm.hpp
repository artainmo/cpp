#ifndef PRESIDENTPARDONFORM_HPP
#define PRESIDENTPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
  std::string const target;
public:
  PresidentialPardonForm(std::string const &_target);
  virtual ~PresidentialPardonForm() {}
  PresidentialPardonForm(const PresidentialPardonForm &to_copy);
  //No operator= because all variables are constant

  void Action() const;

  std::string const &getTarget() const;
};

#endif
