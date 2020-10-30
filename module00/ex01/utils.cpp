#include "contact.hpp"

bool is_number(const std::string &s) //Using iterators to iterate over the string
{
  std::string::const_iterator i = s.begin();

  while (i != s.end())
  {
    if (!std::isdigit(*i))
      return false;
    i++;
  }
  return true;
}

bool end_with_number(const std::string &s) //Check if phrase ends with a number and starts with something else
{
  int i;

  i = s.size();
  while (s[i] != ' ' && i != 0)
    i--;
  if (i == 0)
    return false;
  return (is_number(s.substr(++i, s.size())));
}

bool is_email(const std::string &s) //Look if it contains @
{
  std::string::const_iterator i = s.begin();

  while (i != s.end())
  {
    if (*i == '@')
      return true;
    i++;
  }
  return false;
}
