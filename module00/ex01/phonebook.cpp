#include "phonebook.hpp"
#include "contact.hpp"

//Do not protect against wrong answers as it is not demanded or do protect for it in set_name function
//But allow for multiple word input, which is necessary to take in a postal address for example!!!!
void phonebook::new_contact()
{
  std::string x;

  n += 1;
  if (n >= 7)
  {
    std::cout << "Phonebook is full" << std::endl;
    return ;
  }
  std::cout << "First name: ";
  //std::getline(std::cin, x); //Bug whereby the program wants it two times or he won't read it.
  std::getline(std::cin, x);
  contacts[n].set_first_name(x);
  std::cout << "Last name: ";
  std::getline(std::cin, x);
  contacts[n].set_last_name(x);
  std::cout << "Nickname: ";
  std::getline(std::cin, x);
  contacts[n].set_nickname(x);
  std::cout << "Login: ";
  std::getline(std::cin, x);
  contacts[n].set_login(x);
  std::cout << "Postal address: ";
  std::getline(std::cin, x);
  contacts[n].set_postal_address(x);
  std::cout << "Email address: ";
  std::getline(std::cin, x);
  contacts[n].set_email_address(x);
  std::cout << "Phone number: ";
  std::getline(std::cin, x);
  contacts[n].set_phone_number(x);
  std::cout << "Birthday date: ";
  std::getline(std::cin, x);
  contacts[n].set_birthday_date(x);
  std::cout << "Favourite meal: ";
  std::getline(std::cin, x);
  contacts[n].set_favourite_meal(x);
  std::cout << "Underwear color: ";
  std::getline(std::cin, x);
  contacts[n].set_underwear_color(x);
  std::cout << "Darkest secret: ";
  std::getline(std::cin, x);
  contacts[n].set_darkest_secret(x);
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

void phonebook::show_contacts() //!!!!
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
  std::cout << "Desired contact index:" << std::endl;
  std::getline(std::cin, input); //Empty input
  this->show_contact(atoi(input.c_str()));
}
