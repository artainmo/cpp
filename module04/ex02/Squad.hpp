#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
  typedef struct s_marines
  {
    struct s_marines *first;
    struct s_marines *next;
    ISpaceMarine *member;
  } marines;

  marines *members;

public:
  Squad();
  ~Squad();
  Squad(Squad const &to_copy);
  //A shallow copy has pointers pointing on same memory adress while a deep copy has pointers pointing  on different memory adress
  void operator=(Squad const &to_copy);
  int getCount() const;
  ISpaceMarine* getUnit(int) const;
  int push(ISpaceMarine*);
  void del();
  void deepcopy(Squad const &to_copy);
};

#endif
