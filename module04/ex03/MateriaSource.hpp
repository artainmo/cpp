#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

//Class that stores and clones materias
class MateriaSource: public IMateriaSource
{
private:
  typedef struct material //to make easier you could also use a list instead as you know the limit size; AMateria materials[4]
  {
    AMateria *object;
    struct material *next;
    struct material *first;
  } materials;
  materials *material;
public:
  MateriaSource();
  ~MateriaSource();
  MateriaSource(const MateriaSource &to_copy);
  void operator=(const MateriaSource &to_copy);

  void learnMateria(AMateria*);
  AMateria* createMateria(std::string const & type);

  void deepcopy(const MateriaSource &to_copy);
  void del();

};

#endif
