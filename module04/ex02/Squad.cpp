#include "Squad.hpp"

Squad::Squad()
{
  members = new marines;
  members->first = nullptr;
  members->next = nullptr;
  members->member = nullptr;
}

Squad::~Squad()
{
  del();
}

Squad::Squad(Squad const &to_copy)
{
  *this = to_copy;
}

void Squad::operator=(Squad const &to_copy)
{
  del();
  members = new marines;
  members->first = nullptr;
  members->next = nullptr;
  members->member = nullptr;
  deepcopy(to_copy);
}

int Squad::getCount() const
{
  int i;
  marines *iter;

  i = 1;
  iter = members;
  if (iter->first == nullptr)
    return (0);
  while (iter->next != nullptr)
  {
    iter = iter->next;
    i++;
  }
  return (i);
}

ISpaceMarine* Squad::getUnit(int n) const
{
  int i;
  marines *iter;

  i = 0;
  iter = members;
  while (i < n)
  {
    if (iter->next == nullptr)
      return (nullptr);
    iter = iter->next;
    i++;
  }
  return (iter->member);
}

int Squad::push(ISpaceMarine* memb)
{
  if (memb == nullptr)
    return (getCount());
  if (members->first == nullptr)
  {
    members->first = members;
    members->next = nullptr;
    members->member = memb;
    return (getCount());
  }
  while (members->next != nullptr)
  {
    if (members->member == memb)
    {
      members = members->first;
      return (getCount());
    }
    members = members->next;
  }
  if (members->member == memb)
  {
    members = members->first;
    return (getCount());
  }
  members->next = new marines;
  members->next->first = members->first;
  members = members->next;
  members->next = nullptr;
  members->member = memb;
  members = members->first;
  return (getCount());
}

void Squad::del()
{
  marines *tmp;

  while (members != nullptr)
  {
    delete members->member;
    tmp = members;
    members = members->next;
    delete tmp;
  }
}

void Squad::deepcopy(Squad const &to_copy)
{
  marines *iter;

  iter = to_copy.members;
  while (iter != nullptr)
  {
    push(iter->member->clone());
    iter = iter->next;
  }
}
