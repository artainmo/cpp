#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
  std::string input;
  phonebook pb;

  while (1)
  {
    std::cout << "Phonebook option: ";
    std::getline(std::cin, input); //std::cin is char input stream object (like stdin in c or fd 0), getline is used to take one line and put in input string object
    if (input.compare(std::string("ADD")) == 0)
      pb.new_contact();
    else if (input.compare(std::string("SEARCH")) == 0)
      pb.search();
    else if (input.compare(std::string("EXIT")) == 0)
      break ;
  }
}
