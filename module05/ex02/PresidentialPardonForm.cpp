#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &_target)
:Form("PresidentialPardonForm", 25, 5), target(_target) {}

void PresidentialPardonForm::Action() const
{
  std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &to_copy)
:Form("PresidentialPardonForm", 25, 5), target(to_copy.getTarget()) {}

std::string const &PresidentialPardonForm::getTarget() const
{
  return target;
}
