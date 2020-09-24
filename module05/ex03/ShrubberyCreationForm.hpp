#ifndef SHRUBBERYCRATIONFORM_HPP
#define SHRUBBERYCRATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <string>

class ShrubberyCreationForm : public Form
{
private:
  std::string const target;
public:
  ShrubberyCreationForm(std::string const &_target) : Form("ShrubberyCreationForm", 145, 137), target(_target) {}
  ~ShrubberyCreationForm() {}

  void Action() const;
  bool execute(Bureaucrat const & executor) const;
};

#endif
