#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

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

  void set_first_name();
  void set_last_name();
  void set_nickname();
  void set_login();
  void set_postal_address();
  void set_email_address();
  void set_phone_number();
  void set_birthday_date();
  void set_favourite_meal();
  void set_underwear_color();
  void set_darkest_secret();

  std::string get_first_name();
  std::string get_last_name();
  std::string get_nickname();
  std::string get_login();
  std::string get_postal_address();
  std::string get_email_address();
  std::string get_phone_number();
  std::string get_birthday_date();
  std::string get_favourite_meal();
  std::string get_underwear_color();
  std::string get_darkest_secret();

  std::string get_first_name_formatted();
  std::string get_last_name_formatted();
  std::string get_nickname_formatted();
};

bool is_number(const std::string &s);
bool end_with_number(const std::string &s);
bool is_email(const std::string &s);

#endif
