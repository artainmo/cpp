#include "mutantstack.hpp"

int main()
{
  std::cout << "~~~Test the mutant stack see main for answers~~~" << std::endl;
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl; //Top should be 17
  mstack.pop();
  std::cout << mstack.size() << std::endl; //Size should be one
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
    std::cout << *it << std::endl; //Conplete container should be 5, 3, 5, 737 and 0
    ++it;
  }
  std::stack<int> s(mstack); //Should not emit compilation error
}
