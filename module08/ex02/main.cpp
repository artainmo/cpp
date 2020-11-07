#include "mutantstack.hpp"
#include <list>

//Stack objects is a type of container that uses LIFO (last in first out), whereby you can only add new elements to the end and destroy the last element

int main()
{
  {
    std::cout << "~~~Test the mutant stack~~~" << std::endl;
    MutantStack<int> mstack;
    P("~Size empty stack and empty function");
    P(mstack.size());
    P(mstack.empty());
    P("~Pop empty stack and check size");
    mstack.pop(); //Call segfault like real
    P("~Get top empty stack");
    P(mstack.top()); //call segfault like real
    P("~Filling stack");
    mstack.push(5);
    mstack.push(19);
    mstack.push(42);
    std::cout << "Empty function: " << mstack.empty() << std::endl;
    std::cout << "Top stack: " << mstack.top() << std::endl;
    std::cout << "Size stack: " << mstack.size() << std::endl;
    mstack.pop();
    std::cout << "Top stack after pop: " << mstack.top() << std::endl;
    std::cout << "Size stack after pop: " << mstack.size() << std::endl;
    P("~Filling stack");
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    mstack.push(-123);
    mstack.push(-333333333);
    P("~Iterator on stack");
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    --it;
    *it;
    ++it;
    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }
    while (!mstack.empty())
    {
      std::cout << mstack.top() << std::endl;
      mstack.pop();
    }
    P("~~~Mutantstack in copy constructor std::stack, should give no compilation error~~~");
    std::stack<int> s(mstack); //Should not emit compilation error, as stack is parent class it is possible
  }
  {
    std::cout << "~~~Compare with std::list~~~" << std::endl; //We use first empty stack, and after list for iterator comparison
    std::list<int> mstack;
    std::stack<int> s;
    P("~Size empty stack and empty function");
    P(s.size());
    P(s.empty());
    P("~Pop empty stack and check size");
    s.pop(); //Call segfault
    P("~Get top empty stack");
    P(s.top()); //Call segfault
    P("~Filling list");
    mstack.push_back(5);
    mstack.push_back(19);
    mstack.push_back(42);
    std::cout << "Empty function: " << mstack.empty() << std::endl;
    std::cout << "Top list: " << mstack.back() << std::endl;
    std::cout << "Size list: " << mstack.size() << std::endl;
    mstack.pop_back();
    std::cout << "Top list after pop: " << mstack.back() << std::endl;
    std::cout << "Size list after pop: " << mstack.size() << std::endl;
    P("~Filling list");
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
    mstack.push_back(-123);
    mstack.push_back(-333333333);
    P("~Iterator on list");
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    --it;
    *it;
    ++it;
    while (it != ite)
    {
      std::cout << *it << std::endl;
      ++it;
    }
    while (!mstack.empty())
    {
      std::cout << mstack.back() << std::endl;
      mstack.pop_back();
    }
  }
}
