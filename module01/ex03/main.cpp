#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main()
{
  std::cout << "_____Test ZombieHorde_____" << std::endl;
  ZombieHorde horde = ZombieHorde(7);
  horde.announce();
}
