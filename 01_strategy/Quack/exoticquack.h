#ifndef EXOTICQUACK_H
#define EXOTICQUACK_H

#include "iquackable.h"

class ExoticQuack : public IQuackable
{
public:
  ExoticQuack()
  {
  }
  void Quack()
  {
    std::cout << "Meaow! Meaow!" << std::endl;
  }
};

#endif // EXOTICQUACK_H
