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
  ShrubberyCreationForm(std::string const &_target);
  virtual ~ShrubberyCreationForm() {}
  ShrubberyCreationForm(const ShrubberyCreationForm &to_copy);
  //No operator= because all variables are constant

  void Action() const;

  std::string const &getTarget() const;
};

#endif
