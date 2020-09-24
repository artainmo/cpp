#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter* me = new Character("me");
  AMateria* tmp;
  AMateria* tmp2;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp2 = src->createMateria("cure");
  me->equip(tmp2);
  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  std::cout << "~~Trying to access non-existing materials" << std::endl;
  me->use(2, *bob);
  me->use(3, *bob);
  std::cout << "~~Trying to equip more than 4 weapons" << std::endl;
  me->equip(tmp);
  me->equip(tmp2);
  me->equip(tmp);
  me->equip(tmp2);
  me->equip(tmp);
  std::cout << "~~Accessing the 4th material" << std::endl;
  me->use(3, *bob);
  std::cout << "~~Trying to access the 5th material" << std::endl;
  me->use(4, *bob);
  std::cout << "~~Unequiping the first one" << std::endl;
  std::cout << "Before first : ";
  me->use(0, *bob);
  std::cout << "Before second : ";
  me->use(1, *bob);
  me->unequip(0);
  std::cout << "After unequipment first : ";
  me->use(0, *bob);
  std::cout << "~~Accessing the 4th material after unequipment" << std::endl;
  me->use(3, *bob);
  std::cout << "~~Unequipment second : " << std::endl;
  std::cout << "Before first : ";
  me->use(0, *bob);
  std::cout << "Before second : ";
  me->use(1, *bob);
  std::cout << "Before third : ";
  me->use(2, *bob);
  me->unequip(1);
  std::cout << "After first : ";
  me->use(0, *bob);
  std::cout << "After second : ";
  me->use(1, *bob);
  std::cout << "After third : " << std::endl;
  me->use(2, *bob);
  delete bob;
  delete me;
  delete src;
  return 0;
}
