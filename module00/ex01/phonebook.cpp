#include "phonebook.hpp"


void phonebook::new_contact() //Make sure to take in multiple word input
{
  std::string x;

  n += 1;
  if (n => 7)
  {
    std::cout << "Phonebook is full" << std::endl;
    return ;
  }
  std::cout << "First name: ";
  std::cin >> x //character input redirected in std::string object
  contacts[n].set_first_name(x);
  std::cout << "Last name: ";
  std::cin >> x
  contacts[n].set_last_name(std::string x);
  std::cout << "Nickname: ";
  std::cin >> x
  contacts[n].set_nickname(std::string x);
  std::cout << "Login: ";
  std::cin >> x
  contacts[n].set_login(std::string x);
  std::cout << "Postal address: ";
  std::cin >> x
  contacts[n].set_postal_address(std::string x);
  x = "@";
  while (x.find('@') != std::string::npos)
  {
    std::cout << "Email address: ";
    std::cin >> x
    if (x.find('@') != std::string::npos) //Only accept if contains @
      contacts[n].set_email_address(std::string x);
    else
      std::cout << "Wrong input" << std::endl;
  }
  x = 1;
  while ()
  {
    std::cout << "Phone number: ";
    std::cin >> x
    if ()
      contacts[n].set_phone_number(std::string x); //Do not accept letters
    else
      std::cout << "Wrong input" << std::endl;
  }
  std::cout << "Birthday date (x/y/z format): ";
  std::cin >> x
  contacts[n].set_birthday_date(std::string x); //Only accept if numbers and slashes plus needs to contain 3 slashes
  std::cout << "Favourite meal: ";
  std::cin >> x
  contacts[n].set_favourite_meal(std::string x);
  std::cout << "Underwear color: ";
  std::cin >> x
  contacts[n].set_underwear_color(std::string x);
  std::cout << "Darkest secret: ";
  std::cin >> x
  contacts[n].set_darkest_secret(std::string x);
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
  std::cout << "Index" << "|";
  std::cout << "First name" << "|";
  std::cout << "Last name" << "|" ;
  std::cout << "Nickname" << "|";
  while (i <= n)
  {
    std::cout << i << "|";
    std::cout << contacts[i].get_first_name() << "|";
    std::cout << contacts[i].get_last_name() << "|";
    std::cout << contacts[i].get_nickname() << "|" << std::endl;
  }
}

void phonebook::search()
{
  std::string input;

  this.show_contacts();
  std::cin >> input
  this.show_contact(atoi(input.c_str()));
}

int main()
{
  std::string input;
  phonebook pb;

  while (1)
  {
    std::cout << "Phonebook option: ";
    std::cin >> input;
    if (!strcmp(input, "ADD"))
      pb.new_contact();
    else if (!strcmp(input, "SEARCH"))
      pb.search();
    else if (!strcmp(input, "EXIT"))
      break ;
  }
}
