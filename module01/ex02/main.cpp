#include "Zombie.hpp"
#include "ZombieEvent.hpp"


int main()
{
  std::cout << "_____Test zombie class_____" << std::endl;
  if (1) //This acts like a scope wherafter the object gets destroyed
  {
    Zombie zombie_heap = Zombie("Harold", "big");
    zombie_heap.announce();
  }
  std::cout << "END" << std::endl;
  std::cout << "_____test ZombieEvent class_____" << std::endl;
  ZombieEvent zm;
  zm.setZombieType("small");
  Zombie *zombie = zm.newZombie("Bret"); //Returns a heap allocated object, because it cannot return a stack object as the stack object would get destroyed if returning its address, or otherwise copied which makes it slower
  zombie->announce();
  delete zombie; //Heap allocation needs delete
  std::cout << "END" << std::endl;
  std::cout << "_____test randomChump_____" << std::endl;
  randomChump(); //Stack allocated object does not need delete keyword, after function scope gets automatically destroyed
}
//In cpp stack is used primarily, it is faster and no risk of memory leaks. With reference to access the address stack memrory can be used accross functions
//The only advantages of heap allocation are more memory storage, threads share heap memory
