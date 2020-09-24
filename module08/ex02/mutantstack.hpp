#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <vector>
#include <stack>
#include <iostream>

//Because class is a template class all functions are in the header
template<typename T>
class MutantStack : public std::stack<T> //To allow contruction of stack container from a mutantstackcontainer make stack base class (asked in given main)
{
private:
  std::vector<T> arr;
  //vector class or dynamic array, can do everything that stack can do so we use it to create a stack class with added iterator
  unsigned int n;

public:
  MutantStack():n(0) {}
  MutantStack(MutantStack<T> const &to_copy)
  {
    *this = to_copy;
  }
  ~MutantStack() {}

  void operator=(MutantStack<T> const &to_copy)
  {
    arr = to_copy.arr;
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
  T &top() { return(arr.back()); }
  void push(T elem)
  {
    arr.push_back(elem);
    n += 1;
  }
  void pop()
  {
    arr.pop_back();
    n -= 1;
  }
  void swap(MutantStack<T> to_swap) { arr.swap(to_swap); }
  void emplace(T elem) { arr.push_back(elem); }

  typedef typename std::vector<T>::iterator iterator;
  //In given main iterator is called, so iterator should be considered as std::vector<T>::iterator, use of typedef to change names and declare the iterator type first
  iterator begin() { return(arr.begin()); }
  iterator end() { return(arr.end()); }
  //Use the iterator class inside the vector class, begin() and end() return an iterator pointer
};

#endif
