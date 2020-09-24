#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

//This class is abstract because it contains one pure virtual function, also called an interface
//abstract classes cannot be assigned to variables as a type, they can only act as a parent class, or it will create an error
//If a child class does not override the abstract function, it becomes an abstract class too and thus gives error when used as variable type
class AWeapon
{
  private:
    std::string name;
    int damage;
    int shooting_cost;

  public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(AWeapon const &to_copy);
    virtual ~AWeapon();
    //Deleting a parent class through a pointer on the child class leads to an error at compilation
    //the solution is to use the virtual keyword on the destructor of the parent class
    void operator=(AWeapon const &to_copy);

    std::string const getName() const;
    //First const makes sure value returned do not get trasnformed while second makes sure no values in class get changed inside the function
    int getAPCost() const;
    int getDamage() const;

    virtual void attack() const = 0;
    //Virtual means child classes with same function name override this function
    // = 0 makes it a pure virtual function or abstract function, they only need to be declared and create errors when child classes do not override this function
};

#endif
