#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
  ISpaceMarine* bob = new TacticalMarine;
  ISpaceMarine* jim = new AssaultTerminator;
  ISquad* vlc = new Squad;

  P(vlc->push(bob));
  P(vlc->push(jim));
  for (int i = 0; i < vlc->getCount(); ++i)
  {
    ISpaceMarine* cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
  }
  delete vlc;

  Squad *s = new Squad;
  Squad *s_copy = new Squad;
  TacticalMarine *john = new TacticalMarine;
  AssaultTerminator *beb = new AssaultTerminator;

  P(s->push(john));
  P(s->push(beb));
  P(s->push(beb));
  P(s->push(nullptr));
  //Same member or null member should not be added

  *s_copy = *s;

  std::cout << s << std::endl;
  std::cout << s_copy << std::endl;
  //Not on same memory space to show it is a deep copy

  delete s;
  delete s_copy;
  return 0;
}
