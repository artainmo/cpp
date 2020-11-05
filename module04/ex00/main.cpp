#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Mouse.hpp"
#include "Chicken.hpp"

int main()
{
    Sorcerer *robert = new Sorcerer("Robert", "the Magnificent");
    Victim *jim = new Victim("Jimmy"); //Create heap object to test the necessity of virtual destructor
    Peon *joe = new Peon("Joe");
    Chicken Chicken("Chicken");
    Mouse Mouse("Mouse");

    std::cout << *robert << *jim << *joe << Chicken << Mouse; //They will allow output the same as they all inherit this class from victim class
    robert->polymorph(*jim); //They will all output own phrase, as a virtual function is set in parent class that allows them to have own function
    robert->polymorph(*joe);
    robert->polymorph(Chicken);
    robert->polymorph(Mouse);
    delete robert;
    delete jim;
    delete joe;
}
