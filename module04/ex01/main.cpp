#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "MachineGun.hpp"
#include "ShotGun.hpp"
#include "Snake.hpp"
#include "Spider.hpp"

int main()
{
  Character* me = new Character("me");

  std::cout << *me;

  Enemy* b = new RadScorpion();
  SuperMutant *c = new SuperMutant();
  Spider *sp = new Spider();
  Snake *sn = new Snake();

  AWeapon* pr = new PlasmaRifle();
  AWeapon* pf = new PowerFist();
  AWeapon* mg = new MachineGun();
  AWeapon* sg = new ShotGun();

  std::cout << "~~~Character attacking RadScorpion~~~" << std::endl;
  me->attack(b);
  me->equip(pr);
  me->attack(b);
  std::cout << "Scorpion HP: " << b->getHP() << std::endl;
  std::cout << *me;
  me->equip(pf);
  me->attack(b);
  std::cout << "Scorpion HP: " << b->getHP() << std::endl;
  std::cout << *me;

  std::cout << "~~~Character attacking SuperMutant~~~" << std::endl;
  me->equip(pr);
  me->attack(c);
  std::cout << "SuperMutant HP: " << c->getHP() << std::endl;
  std::cout << *me;
  me->equip(pf);
  me->attack(c);
  std::cout << "SuperMutant HP: " << c->getHP() << std::endl;
  std::cout << *me;


  std::cout << "~~~Killing scorpion~~~" << std::endl;
  std::cout << *me;
  me->attack(b);
  std::cout << "~~~Trying to attack SuperMutant~~~" << std::endl;
  me->attack(c);
  std::cout << "~~~Recovering APs~~~" << std::endl;
  me->recoverAP();
  me->recoverAP();
  me->recoverAP();
  me->recoverAP();
  std::cout << *me;
  std::cout << "~~~SuperMutant takes negative damage~~~" << std::endl;
  c->takeDamage(-20);
  std::cout << "SuperMutant HP: " << c->getHP() << std::endl;
  std::cout << "~~~SuperMutant takes less than shield damage~~~" << std::endl;
  c->takeDamage(3);
  std::cout << "SuperMutant HP: " << c->getHP() << std::endl;
  std::cout << "~~~Killing SuperMutant~~~" << std::endl;
  me->attack(c);
  me->attack(c);
  me->attack(c);
  std::cout << "~~~Attacking Snake and Spider with MachineGun and ShotGun~~~" << std::endl;
  me->equip(mg);
  std::cout << *me;
  me->attack(sn);
  me->attack(sn);
  std::cout << "Snake HP: " << sn->getHP() << std::endl;
  me->recoverAP();
  me->equip(sg);
  me->attack(sp);
  std::cout << "Spider HP: " << sp->getHP() << std::endl;

  delete me;
  delete sn;
  delete pr;
  delete pf;
  delete mg;
  delete sg;
}
