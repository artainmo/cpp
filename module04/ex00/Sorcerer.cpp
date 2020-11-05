#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
: name(name), title(title)
{
  std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
  std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &to_copy)
{
  *this = to_copy;
  std::cout << name << ", " << title << ", is born!" << std::endl;
}

void Sorcerer::operator=(const Sorcerer &to_copy)
{
  name = to_copy.name;
  title = to_copy.title;
}

//If no default constructor created, but constructor called with no parameter an error at compilation will happen, so in each case you will be warned so has no real utility but not sure if this is asked in the pdf
Sorcerer::Sorcerer()
{
  P("ERROR: no parameters");
  std::exit(1);
}

std::ostream &operator<<(std::ostream &stream, const Sorcerer &sorc)
{
  return (stream << "I am " << sorc.name << ", " << sorc.title << ", and I like ponies" << std::endl);
}

void Sorcerer::polymorph(Victim const &vic) const
{
  vic.getPolymorphed();
}
