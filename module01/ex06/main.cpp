#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club); //Takes a weapon in constructor, thus weapon does not need to be initialized, thus reference can be used, as references cannot be initialized with null
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim"); //Constructor does not take a weapon, thus it has to be initialized with null, thus a pointer has to be used
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
}
