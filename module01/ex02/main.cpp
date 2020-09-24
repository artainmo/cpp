#include "Zombie.hpp"
#include "ZombieEvent.hpp"


int main()
{
  std::cout << "_____Test zombie class_____" << std::endl;
  if (1)
  {
    Zombie zombie = Zombie("Harold", "big");
    zombie.announce();
  }
  std::cout << "END" << std::endl;
  std::cout << "_____test ZombieEvent class_____" << std::endl;
  ZombieEvent zm;
  zm.setZombieType("small");
  Zombie *zombie = zm.newZombie("Bret");
  zombie->announce();
  delete zombie;
  std::cout << "END" << std::endl;
  std::cout << "_____test randomChump_____" << std::endl;
  randomChump();
}
