#include "Character.hpp"

Character::Character(std::string const & name)
:name(name)
{
  material = new materials;
  material->first = nullptr;
  material->object = nullptr;
  material->next = nullptr;
}

Character::~Character()
{
  del();
}

Character::Character(Character const &to_copy)
{
  *this = to_copy;
}

void Character::operator=(Character const &to_copy)
{
  del();
  material = new materials;
  material->first = nullptr;
  material->object = nullptr;
  material->next = nullptr;
  deepcopy(to_copy);
}

void Character::equip(AMateria *m)
{
  int i;

  i = 0;
  if (material->first == nullptr)
  {
    material->first = material;
    material->object = m;
    return ;
  }
  while (material->next != nullptr)
  {
    material = material->next;
    i++;
    if (i == 3)
    {
      material = material->first;
      return ;
    }
  }
  material->next = new materials;
  material->next->first = material->first;
  material->next->object = m;
  material->next->next = nullptr;
  material = material->first;
}

void Character::unequip(int idx) //Objects do not get deleted, so they need to be deleted in the function they got created
{
  if (idx > 3)
    return ;
  if (idx == 0)
  {
    material = material->next;
    if (material == nullptr)
    {
      material = new materials;
      material->first = nullptr;
      material->object = nullptr;
      material->next = nullptr;
      material = material->first;
      return ;
    }
    material->first = material;
    while (material->next != nullptr)
    {
      material->next->first = material->first;
      material = material->next;
    }
    material = material->first;
    return ;
  }
  while (idx != 1)
  {
    if (material->next == nullptr)
    {
      material = material->first;
      return ;
    }
    material = material->next;
    idx--;
  }
  if (material->next != nullptr)
    material->next = material->next->next;
  material = material->first;
}

void Character::use(int idx, ICharacter& target)
{
  if (idx > 3)
    return ;
  if (idx == 0 && material->object == nullptr)
    return ;
  while(idx != 0)
  {
    if (material->next == nullptr)
    {
      material = material->first;
      return ;
    }
    idx--;
    material = material->next;
  }
  material->object->use(target);
  material = material->first;
}

void Character::del()
{
  materials *tmp;

  while (material != nullptr)
  {
    tmp = material;
    material = material->next;
    delete tmp;
  }
}

void Character::deepcopy(Character const &to_copy)
{
  materials *tmp;

  tmp = to_copy.material;
  while (tmp != nullptr)
  {
    equip(tmp->object->clone());
    tmp = tmp->next;
  }
}

std::string const & Character::getName() const
{
  return (name);
}
