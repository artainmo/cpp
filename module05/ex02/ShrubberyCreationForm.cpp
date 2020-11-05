#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &_target)
:Form("ShrubberyCreationForm", 145, 137), target(_target) {}

void ShrubberyCreationForm::Action() const
{
  std::string filename;

  filename = target + "_shrubbery";
  std::ofstream file(filename);

  file << "\\/ |    |/" << std::endl;
  file << "\\/ / \\||/  /_/___/_"<< std::endl;
  file << "\\/   |/ \\/"<< std::endl;
  file << "_\\__\\_\\   |  /_____/_"<< std::endl;
  file << "\\  | /          /"<< std::endl;
  file << "__ _-----`  |{,-----------~"<< std::endl;
  file << "\\ }{"<< std::endl;
  file << "}{{"<< std::endl;
  file << "}}{"<< std::endl;
  file << "{{}"<< std::endl;
  file << ", -=-~{ .-^- _"<< std::endl;

  file.close();
  std::cout << filename << " has been created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &to_copy)
:Form("ShrubberyCreationForm", 145, 137), target(to_copy.getTarget()) {}

std::string const &ShrubberyCreationForm::getTarget() const
{
  return target;
}
