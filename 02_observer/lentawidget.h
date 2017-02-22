#ifndef LENTAWIDGET_H
#define LENTAWIDGET_H

#include "iobserver.h"
#include "isubject.h"

class LentaWidget : public IObserver
{
public:
  LentaWidget(ISubject *subj, int id) : IObserver(id)
  {
    subj_ = subj;
    subj_->RegisterObserver(this);
  }
  virtual void Update(std::string &lenta, std::string &twitter, std::string &tv)
  {
    lenta_ = lenta;
    Display();
  }
  virtual void Display()
  {
    std::cout << "Lenta :" << lenta_ << std::endl;
  }
  virtual void RemoveFromSubject()
  {
    subj_->RemoveObserver(this);
  }

private:
  std::string lenta_;
  ISubject *subj_;
};

#endif // LENTAWIDGET_H
