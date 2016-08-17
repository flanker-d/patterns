#ifndef SIMPLEDUCK_H
#define SIMPLEDUCK_H

#include "duckbase.h"
#include "../Quack/iquackable.h"
#include "../Fly/iflyable.h"

class SimpleDuck : public DuckBase
{
public:
  SimpleDuck()
  {

  }
  virtual void Display()
  {
    std::cout << std::endl;
    std::cout << "Hi! I'm simple duck!" << std::endl;
  }
};

#endif // SIMPLEDUCK_H
