#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <vector>
#include <stack>
#include <iostream>
#include <csignal>

#define P(x) std::cout << x << std::endl

//Only add member functions and iterator, not relational operators
template<typename T>
class MutantStack : public std::stack<T> //To allow contruction of stack container from a mutantstackcontainer make stack base class (asked in given main)
{
private:
  std::vector<T> arr;
  //vector class or dynamic array, can do everything that stack can do so we use it to create a stack class with added iterator
  unsigned int n;

public:
  MutantStack():n(0) {}
  ~MutantStack() {}
  MutantStack(MutantStack<T> const &to_copy) { *this = to_copy; }
  void operator=(MutantStack<T> const &to_copy)
  {
    arr = to_copy.arr; //Uses vector assignation operator
    n = to_copy.n;
  }

  bool empty()
  {
    if (n == 0)
      return true;
    else
      return false;
  }

  unsigned int size() { return(n); }

  T &top()
  {
      if (n == 0)
        raise(SIGSEGV);
      return(arr.back());
  }

  void push(T elem)
  {
    arr.push_back(elem);
    n += 1;
  }

  void pop()
  {
    if (n <= 0)
      raise(SIGSEGV);
    arr.pop_back();
    n -= 1;
  }

  // void swap(MutantStack<T> to_swap) { arr.swap(to_swap); } //c++11

  // void emplace(T elem) { arr.push_front(elem); n++; } //c++11

  typedef typename std::vector<T>::iterator iterator;
  //In given main iterator is called, so iterator should be considered as std::vector<T>::iterator, use of typedef to change names and declare the iterator type first
  iterator begin()
  {
    if (n == 0)
      raise(SIGSEGV);
    return(arr.begin());
  }

  iterator end()
  {
    if (n == 0)
      raise(SIGSEGV);
    return(arr.end());
  }
  //Use the iterator class inside the vector class, begin() and end() return an iterator pointer
};

#endif
