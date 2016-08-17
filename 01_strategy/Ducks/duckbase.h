#ifndef DUCKBASE_H
#define DUCKBASE_H

#include <iostream>
#include "../Fly/flywithwings.h"
#include "../Quack/simplequack.h"

class DuckBase
{
protected:
  IFlyable *flyBehaviour;
  IQuackable *quackBehaviour;

public:
  DuckBase()
  {
    flyBehaviour = new FlyWithWings();
    quackBehaviour = new SimpleQuack();
  }
  void SetQuackBehaviour(IQuackable *newQuackBehaviour)
  {
    quackBehaviour = newQuackBehaviour;
  }
  void SetFlyBehaviour(IFlyable *newFlyBehaviour)
  {
    flyBehaviour = newFlyBehaviour;
  }

  void Swim()
  {
    std::cout << "I'm swiming" << std::endl;
  }
  void Fly()
  {
    flyBehaviour->Fly();
  }
  void Quack()
  {
    quackBehaviour->Quack();
  }

  virtual void Display() = 0;
};

#endif // DUCKBASE_H
