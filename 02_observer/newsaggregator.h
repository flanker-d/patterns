#ifndef NEWSAGGREGATOR_H
#define NEWSAGGREGATOR_H

#include <algorithm>
#include <vector>
#include "isubject.h"

class NewsAggregator : public ISubject
{
public:
  NewsAggregator()
  {
  }
  virtual void RegisterObserver(IObserver *observer)
  {
    observers_.push_back(observer);
  }
  virtual void RemoveObserver(IObserver *observer)
  {
    auto found = std::find_if(observers_.begin(), observers_.end(), [observer](IObserver *obs){
      if(observer->id() == obs->id())
        return true;
      else
        return false;
    });
    if(found != observers_.end())
    {
      observers_.erase(found);
    }
  }
  virtual void NotifyObservers()
  {
    std::string lenta = GetLentaNews();
    std::string tv = GetTvNews();
    std::string twitter = GetTwitterNews();

    for(IObserver *obs : observers_)
    {
      obs->Update(lenta, tv, twitter);
    }
  }
  std::string GetLentaNews()
  {
    std::vector<std::string> news = {
      "Lenta news 1",
      "Lenta news 2",
      "Lenta news 3"
    };

    return news.at(random()%3);
  }
  std::string GetTvNews()
  {
    std::vector<std::string> news = {
      "Tv news 1",
      "Tv news 2",
      "Tv news 3"
    };

    return news.at(random()%3);
  }
  std::string GetTwitterNews()
  {
    std::vector<std::string> news = {
      "Twitter news 1",
      "Twitter news 2",
      "Twitter news 3"
    };

    return news.at(random()%3);
  }
  void NewNewsAvailable()
  {
    NotifyObservers();
  }

private:
  std::vector<IObserver *> observers_;
};

#endif // NEWSAGGREGATOR_H
