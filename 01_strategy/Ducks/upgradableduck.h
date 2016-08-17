#ifndef UPGRADABLEDUCK_H
#define UPGRADABLEDUCK_H

#include "duckbase.h"
#include "../Fly/nofly.h"
#include "../Quack/noquack.h"

class UpgradableDuck : public DuckBase
{
public:
  UpgradableDuck()
  {
    flyBehaviour = new NoFly();
    quackBehaviour = new NoQuack();
  }
  virtual void Display()
  {
    std::cout << std::endl;
    std::cout << "I'm an upgradable duck!" << std::endl;
  }
};

#endif // UPGRADABLEDUCK_H
