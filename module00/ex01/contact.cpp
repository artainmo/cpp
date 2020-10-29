#include "contact.hpp"

void contact::set_first_name(std::string x) { first_name = x; }
void contact::set_last_name(std::string x)  { last_name = x; }
void contact::set_nickname(std::string x) { nickname = x; }
void contact::set_login(std::string x) { login = x; }
void contact::set_postal_address(std::string x) { postal_address = x; }
void contact::set_email_address(std::string x) { email_address = x; }
void contact::set_phone_number(std::string x) { phone_number = x; }
void contact::set_birthday_date(std::string x) { birthday_date = x; }
void contact::set_favourite_meal(std::string x) { favourite_meal = x; }
void contact::set_underwear_color(std::string x) { underwear_color = x; }
void contact::set_darkest_secret(std::string x) { darkest_secret = x; }

std::string contact::get_first_name() { return first_name; }
std::string contact::get_last_name() { return last_name; }
std::string contact::get_nickname() { return nickname; }
std::string contact::get_login() { return login; }
std::string contact::get_postal_address() { return postal_address; }
std::string contact::get_email_address() { return email_address; }
std::string contact::get_phone_number() { return phone_number; }
std::string contact::get_birthday_date() { return birthday_date; }
std::string contact::get_favourite_meal() { return favourite_meal; }
std::string contact::get_underwear_color() { return underwear_color; }
std::string contact::get_darkest_secret() { return darkest_secret; }

std::string contact::get_first_name_formatted()
{
  std::string ret(first_name);

  if (ret.size() > 10) //Only set point if more than 10 not if just 10
    ret[10] = '.'
  return ret;
}
std::string contact::get_last_name_formatted()
{
  std::string ret(last_name);

  if (ret.size() > 10) //Only set point if more than 10 not if just 10
    ret[10] = '.'
  return ret;
}
std::string contact::get_nickname_formatted()
{
  std::string ret(nickname);

  if (ret.size() > 10) //Only set point if more than 10 not if just 10
    ret[10] = '.'
  return ret;
}
