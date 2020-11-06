#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate()
{
  int i;
  char r[4] = "abc";

  srand(time(NULL));
  i = rand() % 3; //Random number between 0 and 2
  if (r[i] == 'a')
    return (new A());
  else if (r[i] == 'b')
    return (new B());
  else
    return (new C());
}

void identify_from_pointer(Base *p)
{
  if (dynamic_cast<A *>(p) != nullptr)
    std::cout << "Identify from pointer: A" << std::endl;
  else if (dynamic_cast<B *>(p) != nullptr)
    std::cout << "Identify from pointer: B" << std::endl;
  else if (dynamic_cast<C *>(p) != nullptr)
    std::cout << "Identify from pointer: C" << std::endl;
}
//dynamic_cast is very practical for polymorphic classes, to detect what child class a class is, it will return a nullptr if cast is considered faulty
//Polymorphic classes are base/parent classes that can take up many forms through child classes, trying to cast to sister classes is impossible

void identify_from_reference(Base &p)
{
  if (dynamic_cast<A*>(&p) != nullptr)
    std::cout << "Identify from reference: A" << std::endl;
  else if (dynamic_cast<B*>(&p) != nullptr)
    std::cout << "Identify from reference: B" << std::endl;
  else if (dynamic_cast<C*>(&p) != nullptr)
    std::cout << "Identify from reference: C" << std::endl;
}
//dynamic_cast returns compilation errors if address is not given, but value the address points to. So you need to give the address using reference to make it work as intended 


int main()
{
  Base *base;

  base = generate();
  identify_from_pointer(base);
  identify_from_reference(*base);
  delete base; //Freeing the malloced base
}
