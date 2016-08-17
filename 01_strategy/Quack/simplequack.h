#ifndef SIMPLEQUACK_H
#define SIMPLEQUACK_H

#include "iquackable.h"

class SimpleQuack : public IQuackable
{
public:
  SimpleQuack()
  {
  }
  void Quack()
  {
    std::cout << "Quack! Quack!" << std::endl;
  }
};

#endif // SIMPLEQUACK_H
