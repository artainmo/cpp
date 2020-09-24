#ifndef PHONEBOOK
#define PHONEBOOK

#include <string>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <locale>

typedef struct contact
{
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
  struct contact *head;
  struct contact *next;
}cont;


#endif
