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
  else if (r[i] == 'c')
    return (new C());
  else
    return (nullptr);
}

void identify_from_pointer(Base * p)
{
  if (dynamic_cast<A *>(p) != nullptr)
    std::cout << "Identify from pointer: A" << std::endl;
  else if (dynamic_cast<B *>(p) != nullptr)
    std::cout << "Identify from pointer: B" << std::endl;
  else if (dynamic_cast<C *>(p) != nullptr)
    std::cout << "Identify from pointer: C" << std::endl;
}//dynamic_cast is very practical for polymorphic classes, to detect what child class a class is, it will return a nullptr if cast is considered faulty

void identify_from_reference(Base &p)
{
  Base *base;

  base = &p;
  if (dynamic_cast<A*>(base) != nullptr)
    std::cout << "Identify from reference: A" << std::endl;
  else if (dynamic_cast<B*>(base) != nullptr)
    std::cout << "Identify from reference: B" << std::endl;
  else if (dynamic_cast<C*>(base) != nullptr)
    std::cout << "Identify from reference: C" << std::endl;
} //Other technique with references consists of catching errors with error handling if not correct cast, this technique of giving address to a pointer is simpler
  //With pointers dynamic_cast returns a nullptr on error, but with references it gives compile-time errors.

int main()
{
  Base *base;

  base = generate();
  identify_from_pointer(base);
  identify_from_reference(*base);
  delete base; //Freeing the malloced base
}
