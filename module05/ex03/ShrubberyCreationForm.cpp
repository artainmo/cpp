#include "ShrubberyCreationForm.hpp"

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

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
  try
  {
    if (getSigne() == true)
    {
      if (executor.getGrade() <= getGrade_exec())
      {
        Action();
        return true;
      }
      else
        throw GradeTooLowException();
    }
    else
      throw UnsignedException();
  }
  catch (GradeTooLowException &e)
  {
    e.detail();
  }
  catch (UnsignedException &e)
  {
    e.detail();
  }
  return false;
}
