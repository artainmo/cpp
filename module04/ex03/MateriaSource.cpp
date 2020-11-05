#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
  material = new materials;
  material->first = nullptr;
  material->object = nullptr;
  material->next = nullptr;
}

MateriaSource::~MateriaSource()
{
  del();
}

void MateriaSource::learnMateria(AMateria* m)
{
  int i;

  i = 0;
  if (material->first == nullptr)
  {
    material->first = material;
    material->object = m;
    material = material->first;
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
  while (material->next != nullptr && material->object->getType().compare(type) != 0)
    material = material->next;
  if (material == nullptr)
  {
    material = material->first;
    return (nullptr);
  }
  return (material->object->clone());
}

MateriaSource::MateriaSource(const MateriaSource &to_copy)
{
  *this = to_copy;
}

void MateriaSource::operator=(const MateriaSource &to_copy)
{
  del();
  material = new materials;
  material->first = nullptr;
  material->object = nullptr;
  material->next = nullptr;
  deepcopy(to_copy);
}

void MateriaSource::del()
{
  materials *tmp;

  while (material != nullptr)
  {
    tmp = material;
    material = material->next;
    delete tmp;
  }
}

void MateriaSource::deepcopy(MateriaSource const &to_copy)
{
  materials *tmp;

  tmp = to_copy.material;
  while (tmp != nullptr)
  {
    learnMateria(tmp->object->clone());
    tmp = tmp->next;
  }
}
