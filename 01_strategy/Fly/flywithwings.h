#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "iflyable.h"

class FlyWithWings : public IFlyable
{
public:
  FlyWithWings()
  {
  }
  void Fly()
  {
    std::cout << "I'm flying with my wings" << std::endl;
  }
};

#endif // FLYWITHWINGS_H
