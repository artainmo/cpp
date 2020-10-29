#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>

class contact
{
private:
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string login;
  std::string postal_address;
  std::string email_address;
  std::string phone_number;
  std::string birthday_date;
  std::string favourite_meal;
  std::string underwear_color;
  std::string darkest_secret;

public:
  contact() {}
  ~contact() {}

  void set_first_name(std::string x): first_name(x) {}
  void set_last_name(std::string x): last_name(x) {}
  void set_nickname(std::string x): nickname(x) {}
  void set_login(std::string x): login(x) {}
  void set_postal_address(std::string x): postal_address(x) {}
  void set_email_address(std::string x): email_address(x) {}
  void set_phone_number(std::string x): phone_number(x) {}
  void set_birthday_date(std::string x): birthday_date(x) {}
  void set_favourite_meal(std::string x): favourite_meal(x) {}
  void set_underwear_color(std::string x): underwear_color(x) {}
  void set_darkest_secret(std::string x): darkest_secret(x) {}

  std::string get_first_name(std::string x) { return first_name; }
  std::string get_last_name(std::string x) { return last_name; }
  std::string get_nickname(std::string x) { return nickname; }
  std::string get_login(std::string x) { return login; }
  std::string get_postal_address(std::string x) { return postal_address; }
  std::string get_email_address(std::string x) { return email_address; }
  std::string get_phone_number(std::string x) { return phone_number; }
  std::string get_birthday_date(std::string x) { return birthday_date; }
  std::string get_favourite_meal(std::string x) { return favourite_meal; }
  std::string get_underwear_color(std::string x) { return underwear_color; }
  std::string get_darkest_secret(std::string x) { return darkest_secret; }
};

class Phonebook
{
private:
  contact contacts[8];
  int n;

public:
  Phonebook(): n(-1) {}
  ~Phonebook() {}

  void new_contact();
  void show_contact();
  void show_contacts();
  void search();
};

#endif
