#ifndef TVWIDGET_H
#define TVWIDGET_H

#include "iobserver.h"
#include "isubject.h"

class TvWidget : public IObserver
{
public:
  TvWidget(ISubject *subj, int id) : IObserver(id)
  {
    subj_ = subj;
    subj_->RegisterObserver(this);
  }
  virtual void Update(std::string &lenta, std::string &twitter, std::string &tv)
  {
    tv_ = tv;
    Display();
  }
  virtual void Display()
  {
    std::cout << "Tv :" << tv_ << std::endl;
  }
  virtual void RemoveFromSubject()
  {
    subj_->RemoveObserver(this);
  }

private:
  std::string tv_;
  ISubject *subj_;
};

#endif // TVWIDGET_H
