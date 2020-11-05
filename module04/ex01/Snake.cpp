#include "Snake.hpp"

Snake::Snake()
:Enemy(40, "Snake")
{
  std::cout << "* sssssssssssssss *" << std::endl;
}

Snake::~Snake()
{
  std::cout << "* sssssssseeeeee *" << std::endl;
}

Snake::Snake(const Snake &to_copy)
:Enemy(to_copy.getHP(),to_copy.getType())
{
  std::cout << "* sssssssssssssss *" << std::endl;
}

void Snake::operator=(const Snake &to_copy)
{
  setHP(to_copy.getHP());
  setType(to_copy.getType());
}
