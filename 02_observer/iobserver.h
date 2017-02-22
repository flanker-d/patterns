#ifndef IWIDGET_H
#define IWIDGET_H

#include <iostream>
#include <string>

class IObserver
{
public:
  IObserver(int id)
    : id_(id)
  {
  }
  virtual ~IObserver()
  {

  }
  virtual void Update(std::string &lenta, std::string &twitter, std::string &tv) = 0;
  virtual void Display() = 0;
  virtual void RemoveFromSubject() = 0;
  int id()
  {
    return id_;
  }

protected:
  int id_;
};

#endif // IWIDGET_H
