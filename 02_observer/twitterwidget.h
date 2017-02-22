#ifndef TWITTERWIDGET_H
#define TWITTERWIDGET_H

#include "iobserver.h"
#include "isubject.h"

class TwitterWidget : public IObserver
{
public:
  TwitterWidget(ISubject *subj, int id) : IObserver(id)
  {
    subj_ = subj;
    subj_->RegisterObserver(this);
  }
  virtual void Update(std::string &lenta, std::string &twitter, std::string &tv)
  {
    twitter_ = twitter;
    Display();
  }
  virtual void Display()
  {
    std::cout << "Twitter :" << twitter_ << std::endl;
  }
  virtual void RemoveFromSubject()
  {
    subj_->RemoveObserver(this);
  }

private:
  std::string twitter_;
  ISubject *subj_;
};

#endif // TWITTERWIDGET_H
