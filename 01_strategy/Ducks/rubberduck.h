#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "duckbase.h"
#include "../Fly/nofly.h"

class RubberDuck : public DuckBase
{
public:
  RubberDuck()
  {
    flyBehaviour = new NoFly();
  }
  virtual void Display()
  {
    std::cout << std::endl;
    std::cout << "Hi! I'm rubber duck!" <<std::endl;
  }
};

#endif // RUBBERDUCK_H
