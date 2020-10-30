#include "contact.hpp"

void contact::set_first_name() //Protect all against empty lines
{
  std::string x;

  std::cout << "First name: ";
  std::getline(std::cin, x);
  while (x == "")
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "First name: ";
    std::getline(std::cin, x);
  }
  first_name = x;
}

void contact::set_last_name()
{
  std::string x;

  std::cout << "Last name: ";
  std::getline(std::cin, x);
  while (x == "")
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Last name: ";
    std::getline(std::cin, x);
  }
  last_name = x;
}

void contact::set_nickname()
{
  std::string x;

  std::cout << "Nickname: ";
  std::getline(std::cin, x);
  while (x == "")
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Nickname: ";
    std::getline(std::cin, x);
  }
  nickname = x;
}

void contact::set_login()
{
  std::string x;

  std::cout << "Login: ";
  std::getline(std::cin, x);
  while (x == "")
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Login: ";
    std::getline(std::cin, x);
  }
  login = x;
}

void contact::set_postal_address() //Ask for country, city, post code, street, street number
{
  std::string country;
  std::string city;
  std::string street;

  std::cout << "Postal address: " << std::endl;
  std::cout << "Country: ";
  std::getline(std::cin, country);
  while (country == "")
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Country: ";
    std::getline(std::cin, country);
  }
  std::cout << "City and postal code: ";
  std::getline(std::cin, city);
  while (city == "" || !end_with_number(city))
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "City and postal code: ";
    std::getline(std::cin, city);
  }
  std::cout << "Street and street number: ";
  std::getline(std::cin, street);
  while (street == "" || !end_with_number(street))
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Street and street number: ";
    std::getline(std::cin, street);
  }
  postal_address = country + ", " + city + ", " + street;
}

void contact::set_email_address() //Check if contains @
{
  std::string x;

  std::cout << "Email address: ";
  std::getline(std::cin, x);
  while (x == "" || !is_email(x))
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Email address: ";
    std::getline(std::cin, x);
  }
  email_address = x;
}

void contact::set_phone_number() //Check if it is a number
{
  std::string x;

  std::cout << "Phone number: ";
  std::getline(std::cin, x);
  while (x == "" || !is_number(x))
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Phone number: ";
    std::getline(std::cin, x);
  }
  phone_number = x;
}

void contact::set_birthday_date() //Demand month/day/year and check if numbers
{
  std::string month;
  std::string day;
  std::string year;

  std::cout << "Birthday date: " << std::endl;
  std::cout << "month: ";
  std::getline(std::cin, month);
  while (month == "" || !is_number(month) || atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "month: ";
    std::getline(std::cin, month);
  }
  std::cout << "day: ";
  std::getline(std::cin, day);
  while (day == "" || !is_number(day) || atoi(day.c_str()) < 1 || atoi(day.c_str()) > 31)
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "day: ";
    std::getline(std::cin, day);
  }
  std::cout << "year: ";
  std::getline(std::cin, year);
  while (year == "" || !is_number(year) || atoi(year.c_str()) > 2020)
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "year: ";
    std::getline(std::cin, year);
  }
  birthday_date = month + "/" + day + "/" + year;
}

void contact::set_favourite_meal()
{
  std::string x;

  std::cout << "Favourite meal: ";
  std::getline(std::cin, x);
  while (x == "")
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Favourite meal: ";
    std::getline(std::cin, x);
  }
  favourite_meal = x;
}

void contact::set_underwear_color()
{
  std::string x;

  std::cout << "Underwear color: ";
  std::getline(std::cin, x);
  while (x == "")
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Underwear color: ";
    std::getline(std::cin, x);
  }
  underwear_color = x;
}

void contact::set_darkest_secret()
{
  std::string x;

  std::cout << "Darkest secret: ";
  std::getline(std::cin, x);
  while (x == "")
  {
    std::cout << "Wrong input" << std::endl;
    std::cout << "Darkest secret: ";
    std::getline(std::cin, x);
  }
  darkest_secret = x;
}

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
    ret[9] = '.';
  return ret.substr(0, 10);
}
std::string contact::get_last_name_formatted()
{
  std::string ret(last_name);

  if (ret.size() > 10) //Only set point if more than 10 not if just 10
    ret[9] = '.';
  return ret.substr(0, 10);
}
std::string contact::get_nickname_formatted()
{
  std::string ret(nickname);

  if (ret.size() > 10) //Only set point if more than 10 not if just 10
    ret[9] = '.';
  return ret.substr(0, 10);
}
