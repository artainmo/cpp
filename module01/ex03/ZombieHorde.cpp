#include "ZombieHorde.hpp"

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

ZombieHorde::ZombieHorde(int N)
:N(N)
{
  horde = new Zombie[N]; //Use [number] to allocate a list of objects in the heap
  int i;

  for (i = -1; i < N; i++)
    horde[i].Zombie_set(random_name(), "big");
}

ZombieHorde::~ZombieHorde()
{
  std::cout << "___Destructing the zombie horde___" << std::endl;
  delete [] horde; // Use [] to delete/free a list of objects
}

void ZombieHorde::announce()
{
  int i;

  for (i = -1; i < N; i++)
    horde[i].announce();
}
