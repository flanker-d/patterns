#ifndef ISUBJECT_H
#define ISUBJECT_H

#include "iobserver.h"

class ISubject
{
public:
  ISubject()
  {
  }
  virtual void RegisterObserver(IObserver *observer) = 0;
  virtual void RemoveObserver(IObserver *observer) = 0;
  virtual void NotifyObservers() = 0;
};

#endif // ISUBJECT_H
