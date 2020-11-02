#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Mouse.hpp"
#include "Chicken.hpp"

int main()
{
  Sorcerer robert("Robert", "the Magnificent");
  Victim jim("Jimmy");
  Peon joe("Joe");
  Chicken Chicken("Chicken");
  Mouse Mouse("Mouse");

  std::cout << robert << jim << joe << Chicken << Mouse; //They will allow output the same as they all inherit this class from victim class
  robert.polymorph(jim); //They will all output own phrase, as a virtual function is set in parent class that allows them to have own function
  robert.polymorph(joe);
  robert.polymorph(Chicken);
  robert.polymorph(Mouse);
}
