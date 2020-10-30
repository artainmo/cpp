#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
  std::string name;
  //(A reference cannot get initialized with null, so when not initialized with constructor problem occur that pointer can resolve)
  //A refernce cannot hold a nullptr because it is a constant
  //HumanA takes weapon directly in constructor, so no null value initialization necessary, so reference can be used
  Weapon &weapon; //Used to take in given address like a pointer would, but in the stack instead of heap

  HumanA(std::string name, Weapon &weapon);
  void attack();
};

//(function call parameter -> function parameter)

//(str -> *str)
//If a pointer is passed to a function as a parameter and tried to be modified
//then the changes made to the pointer does not reflects back outside that function.
//This is because only a copy of the pointer is passed to the function.

//(&str -> **str)
//Pointer to pointer, passes the address of original pointer instead of creating a copy on another memory location

//(str -> &str)
//Reference to pointer
//A reference allows called function to modify a local variable of the caller function.
//By using str you can change its value and by using & you can access its address inside the called function
//Reference to pointer, makes sure same object in memory space and not a copy somewhere else in memory space gets taken, creating a copy is also slower


//In this exercise we do not want a copy of values but we want the same memory adress for local variables,
//thus reference to pointer

//https://www.geeksforgeeks.org/passing-reference-to-a-pointer-in-c/

#endif
