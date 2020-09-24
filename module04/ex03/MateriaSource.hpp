#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

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
  void learnMateria(AMateria*);
  AMateria* createMateria(std::string const & type);

};

#endif
