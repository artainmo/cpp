#include "phonebook.hpp"
#include "contact.hpp"

void phonebook::new_contact()
{
  n++;
  if (n > 7)
  {
    std::cout << "Phonebook is full" << std::endl;
    n--;
    return ;
  }
  contacts[n].set_first_name();
  contacts[n].set_last_name();
  contacts[n].set_nickname();
  contacts[n].set_login();
  contacts[n].set_postal_address();
  contacts[n].set_email_address();
  contacts[n].set_phone_number();
  contacts[n].set_birthday_date();
  contacts[n].set_favourite_meal();
  contacts[n].set_underwear_color();
  contacts[n].set_darkest_secret();
}

void phonebook::show_contact(int num)
{
  if (n < num)
  {
    std::cout << "Contact does not exist" << std::endl;
    return ;
  }
  std::cout << "First name : " << contacts[num].get_first_name() << std::endl;
  std::cout << "Last name : " << contacts[num].get_last_name() << std::endl;
  std::cout << "Nickname : " << contacts[num].get_nickname() << std::endl;
  std::cout << "Login : " << contacts[num].get_login() << std::endl;
  std::cout << "Postal adress : " << contacts[num].get_postal_address() << std::endl;
  std::cout << "Email address : " << contacts[num].get_email_address() << std::endl;
  std::cout << "Birthday date : " << contacts[num].get_birthday_date() << std::endl;
  std::cout << "Favorite meal : " << contacts[num].get_favourite_meal() << std::endl;
  std::cout << "Underwear color : " << contacts[num].get_underwear_color() << std::endl;
  std::cout << "Darkest secet : " << contacts[num].get_darkest_secret() << std::endl;
}

void phonebook::show_contacts()
{
  int i;

  i = 0;
  std::cout << "|" << std::setw(10) << std::left << "Index" << "|";
  std::cout << std::setw(10) << std::left << "First name" << "|";
  std::cout << std::setw(10) << std::left << "Last name" << "|" ;
  std::cout << std::setw(10) << std::left << "Nickname" << "|" << std::endl;
  while (i <= n)
  {
    std::cout << "|" << std::setw(10) << std::left << i << "|";
    std::cout << std::setw(10) << std::left << contacts[i].get_first_name_formatted() << "|";
    std::cout << std::setw(10) << std::left << contacts[i].get_last_name_formatted() << "|";
    std::cout << std::setw(10) << std::left << contacts[i].get_nickname_formatted() << "|" << std::endl;
    i++;
  }
}

void phonebook::search()
{
  std::string input;

  if (n == -1)
  {
    std::cout << "No contacts" << std::endl;
    return ;
  }
  this->show_contacts();
  std::cout << "Desired contact index: ";
  std::getline(std::cin, input);
  while (input == "" || !is_number(input))
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Desired contact index: ";
    std::getline(std::cin, input);
  }
  this->show_contact(atoi(input.c_str()));
}
