#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

//Protect against not found weapon to use or unequip

int main()
{
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice()); //At src destruction will destroy the object given as parameter
  src->learnMateria(new Cure());
  ICharacter* me = new Character("me");
  AMateria* tmp;
  AMateria* tmp2;

  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp2 = src->createMateria("cure");
  me->equip(tmp2);
  ICharacter* bob = new Character("bob");
  me->use(0, *bob); //Use materia ice, shoots ice bolt
  me->use(1, *bob); //Use cure materia, heals wounds
  std::cout << "~~Trying to access non-existing materials" << std::endl; //Should not output anything
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
  std::cout << "~~Trying to access the 5th material" << std::endl; //Should not output anything
  me->use(4, *bob);
  std::cout << "~~Unequiping the first one" << std::endl;
  std::cout << "Before first : ";
  me->use(0, *bob);
  std::cout << "Before second : ";
  me->use(1, *bob);
  me->unequip(0);
  std::cout << "After unequipment first : ";
  me->use(0, *bob);
  std::cout << "~~Accessing the 4th material after unequipment" << std::endl; //Should output nothing
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
  std::cout << "After third : " << std::endl; //Should output nothing
  me->use(2, *bob);
  std::cout << "~~Try unequip non-existing objects" << std::endl; //Should output nothing
  me->unequip(3);
  me->unequip(4);

  std::cout << "~~Verify the deep copy"<< std::endl;
  ICharacter *me_copy = new Character("me_copy");
  *me_copy = *me; //Verifying if copy is deep by looking if memory address is the same
  std::cout << me << std::endl;
  std::cout << me_copy << std::endl;

  //Objects should be deleted two times, because deepcopies were made of materials, if no deepcopy should segfault
  delete me;
  delete me_copy;

  std::cout << "~~Deleting all the objects" << std::endl; //Should output nothing
  delete bob;
  delete src;
  delete tmp; //Because ICharacter creates a deep copy, should also be deleted
  delete tmp2;
  return 0;
}
