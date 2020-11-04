#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

//Character can take in 4 materias (powers)
class Character: public ICharacter
{
private:
  typedef struct material //to make easier you could also use a list instead as you know the limit size; AMateria materials[4]
  {
    AMateria *object;
    struct material *next;
    struct material *first;
  } materials;
  std::string name;
  materials *material;


public:
  Character(std::string const & name);
  Character(Character const &to_copy);
  void operator=(Character const &to_copy);
  ~Character();

  std::string const &getName() const;
	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter & target);

  void del();
  void deepcopy(Character const &to_copy);

};

#endif
