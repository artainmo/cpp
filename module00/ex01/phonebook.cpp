#include "phonebook.hpp"
//Contradiction in pdf, do not use dynamic allocation but use the string object, string object uses dynamic allocation...

class phonebook
{
public:
  cont *contact;
  cont contact1;
  cont contact2;
  cont contact3;
  cont contact4;
  cont contact5;
  cont contact6;
  cont contact7;
  cont contact8;

  phonebook()
  {
    contact = &contact1;
    contact1.head = nullptr;
    contact1.next = &contact2;
    contact2.head = nullptr;
    contact2.next = &contact3;
    contact3.head = nullptr;
    contact3.next = &contact4;
    contact4.head = nullptr;
    contact4.next = &contact5;
    contact5.head = nullptr;
    contact5.next = &contact6;
    contact6.head = nullptr;
    contact6.next = &contact7;
    contact7.head = nullptr;
    contact7.next = &contact8;
    contact8.head = nullptr;
    contact8.next = nullptr;
  }

  ~phonebook()
  {
    std::cout << "Because stack memory was used automatic destruction of objects when going out of scope(function)" << std::endl;
  }

  void show(char str[8][11], int max)
  {
    int i;
    int width;

    i = 0;
    while (i < max)
    {
      width = 11 - strlen(str[i]);
      std::cout << str[i] << std::setw(width) << std::setfill(' ') << "|";
      i++;
    }
    std::cout << std::endl;
  }

  void add()
  {
    contact = &contact1;
    if (contact->head != nullptr)
    {
      while (contact->head != nullptr)
      {
        if (contact->next == nullptr)
        {
          std::cout << "Max number of contacts already attained" << std::endl;
          return;
        }
        contact = contact->next;
      }
    }
    std::cout << "First name" << std::endl;
    std::cin >> std::setw(11) >> contact->first_name;
    std::cout << "Last name" << std::endl;
    std::cin >> std::setw(11) >> contact->last_name;
    std::cout << "Nickname" << std::endl;
    std::cin >> std::setw(11) >>  contact->nickname;
    std::cout << "Login" << std::endl;
    std::cin >> std::setw(11) >> contact->login;
    std::cout << "Postal address" << std::endl;
    std::cin >> std::setw(11) >> contact->postal_address;
    std::cout << "Email address" << std::endl;
    std::cin >> std::setw(11) >> contact->email_address;
    std::cout << "Phone number" << std::endl;
    std::cin >> std::setw(11) >> contact->phone_number;
    std::cout << "Birthday date" << std::endl;
    std::cin >> std::setw(11) >> contact->birthday_date;
    std::cout << "Favorite meal" << std::endl;
    std::cin >> std::setw(11) >> contact->favorite_meal;
    std::cout << "Underwear color" << std::endl;
    std::cin >> std::setw(11) >> contact->underwear_color;
    std::cout << "Darkest secret" << std::endl;
    std::cin >> std::setw(11) >> contact->darkest_secret;
    contact->head = &contact1;
  }

  void search()
  {
      contact = &contact1;
      int i;
      int all_max;
      int index[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
      char input[1];
      char first_name[8][11];
      char last_name[8][11];
      char nickname[8][11];

      i = 0;
      while (contact != nullptr && contact->head != nullptr)
      {
        index[i] = i;
        strcpy(first_name[i], contact->first_name);
        strcpy(last_name[i], contact->last_name);
        strcpy(nickname[i], contact->nickname);
        contact = contact->next;
        i++;
      }
      all_max = i;
      std::cout << "Number of contacts " << all_max << std::endl;
      i = 0;
      std::cout << "index :     ";
      while (index[i] != -1 && i != 4)
      {
        std::cout << index[i] << std::setw(10) << std::setfill(' ') << "|";
        i++;
      }
      std::cout << std::endl;
      if (i == 0)
      {
        std::cout << "No contacts" << std::endl;
        return;
      }
      std::cout << "First name :";
      show(first_name, i);
      std::cout << "Last name : ";
      show(last_name, i);
      std::cout << "Nickname :  ";
      show(nickname, i);
      std::cout << "contact index" << std::endl;
      int rem_bug_fix = all_max; //Bizarre cpp behavior, some integers are reset to 0 after the std::cin
      std::cin >> input;
      if (atoi(input) > rem_bug_fix - 1 || !(input[0] > 47 && input[0] < 58))
      {
        std::cout << "contact does not exist" << std::endl;
        return;
      }
      contact = &contact1;
      for (i = 0; i != atoi(input); i++)
        contact = contact->next;
      std::cout << "First name : " << contact->first_name << std::endl;
      std::cout << "Last name : " << contact->last_name << std::endl;
      std::cout << "Nickname : " << contact->nickname << std::endl;
      std::cout << "Login : " << contact->login << std::endl;
      std::cout << "Postal adress : " << contact->postal_address << std::endl;
      std::cout << "Email adress : " << contact->email_address << std::endl;
      std::cout << "Birthday date : " << contact->birthday_date << std::endl;
      std::cout << "Favorite meal : " << contact->favorite_meal << std::endl;
      std::cout << "Underwear color : " << contact->underwear_color << std::endl;
      std::cout << "Darkest secet : " << contact->darkest_secret << std::endl;
  }
};

int main()
{
  char input[7];
  phonebook pb;

  while (1)
  {
    std::cout << "Phonebook option" << std::endl;
    std::cin >> std::setw(7) >> input;
    if (!strcmp(input, "ADD"))
      pb.add();
    else if (!strcmp(input, "SEARCH"))
      pb.search();
    else if (!strcmp(input, "EXIT"))
      break ;
  }
}
