#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() //Does not call the parent class constructor as it does not contain a constructor as it is not necessary
{
  std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
  std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
  return (new TacticalMarine());
}
//Used to create a deepcopy, allocated in heap in another address location, because contains no variables no real need to copy

void TacticalMarine::battleCry() const
{
  std::cout <<  "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
  std::cout <<   "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
  std::cout << "* attacks with a chainsword *" << std::endl;
}
