#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

#include <string>
#include <iostream>
#include <iomanip>

class phonebook
{
private:
  contact contacts[8];
  int n;

public:
  phonebook(): n(-1) {}
  ~phonebook() {}

  void new_contact();
  void show_contact(int);
  void show_contacts();
  void search();
};

#endif
