#ifndef PRESIDENTPARDONFORM_HPP
#define PRESIDENTPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
  std::string const target;
public:
  PresidentialPardonForm(std::string const &_target) : Form("PresidentialPardonForm", 25, 5), target(_target) {}
  ~PresidentialPardonForm() {}

  void Action() const;
  bool execute(Bureaucrat const & executor) const;
};

#endif
