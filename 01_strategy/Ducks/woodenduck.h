#ifndef WOODENDUCK_H
#define WOODENDUCK_H

#include "duckbase.h"
#include "../Fly/nofly.h"
#include "../Quack/noquack.h"

class WoodenDuck : public DuckBase
{
public:
  WoodenDuck()
  {
    flyBehaviour = new NoFly();
    quackBehaviour = new NoQuack();
  }
  virtual void Display()
  {
    std::cout << std::endl;
    std::cout << "Hi! I'm wooden duck!" << std::endl;
  }
};

#endif // WOODENDUCK_H
