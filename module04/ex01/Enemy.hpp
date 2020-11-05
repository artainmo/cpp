#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

//Its childclasses have constant variable values thus coplien form, copy and assignatin function makes no sense
class Enemy
{
//Private makes only available to class itself while protected makes accesible to class itself plus classes that inherit from the class
private:
  int hit_points;
  std::string type;

public:
  Enemy(int hp, std::string const & type);
  Enemy(const Enemy &to_copy);
  virtual ~Enemy();
  //Deleting a parent class through a pointer on the child class leads to an error at compilation
  //the solution is to use the virtual keyword on the destructor of the parent class
  void operator=(const Enemy &to_copy);

  std::string const getType() const;
  int getHP() const;
  virtual void takeDamage(int);
  void setType(std::string _type);
  void setHP(int _hp);
};

#endif
