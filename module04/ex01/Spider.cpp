#include "Spider.hpp"

Spider::Spider()
:Enemy(20, "Spider")
{
  std::cout << "* silent *" << std::endl;
}

Spider::~Spider()
{
  std::cout << "* silent dead *" << std::endl;
}

Spider::Spider(const Spider &to_copy)
:Enemy(to_copy.getHP(),to_copy.getType())
{
  std::cout << "* silent *" << std::endl;
}

void Spider::operator=(const Spider &to_copy)
{
  setHP(to_copy.getHP());
  setType(to_copy.getType());
}
