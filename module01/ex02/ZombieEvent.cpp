#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string new_type)
{
  type = new_type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
  Zombie *zomb = new Zombie(name, type);
  return zomb;
}

static std::string random_name()
{
  int i = 0;
  char name[5];

  srand(time(NULL)); //If srand not initialized, random name will always be the same
  while (i < 5)
  {
    name[i] = rand() %  26 + 97; //Between 97-123 the alphabet ascii values
    i++;
  }
  name[i] = 0;
  return std::string(name);
}

void randomChump()
{
  std::string name = random_name();

  Zombie zomb = Zombie(name, "big");
  std::cout << "Hello I am the randomly generated zombie called: " << zomb.name << std::endl;
}
