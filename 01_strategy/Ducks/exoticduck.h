#ifndef EXOTICDUCK_H
#define EXOTICDUCK_H

#include "duckbase.h"
#include "../Quack/exoticquack.h"

class ExoticDuck : public DuckBase
{
public:
  ExoticDuck()
  {
    quackBehaviour = new ExoticQuack();
  }
  virtual void Display()
  {
    std::cout << std::endl;
    std::cout << "Hi! I'm exotic duck!" << std::endl;
  }
};

#endif // EXOTICDUCK_H
