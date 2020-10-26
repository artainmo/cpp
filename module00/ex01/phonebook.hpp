#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <locale>

class cont //In the end same as structure all contained variables are public
{
public:
  char first_name[11];
  char last_name[11];
  char nickname[11];
  char login[11];
  char postal_address[11];
  char email_address[11];
  char phone_number[11];
  char birthday_date[11];
  char favorite_meal[11];
  char underwear_color[11];
  char darkest_secret[11];
  cont *head;
  cont *next;
};


#endif
