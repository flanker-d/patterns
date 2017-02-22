#include <iostream>
#include "newsaggregator.h"
#include "lentawidget.h"
#include "twitterwidget.h"
#include "tvwidget.h"
using namespace std;

int main(int argc, char *argv[])
{
  NewsAggregator agg;

  LentaWidget lenta_w(&agg, 1);
  TvWidget tv_w(&agg, 2);
  TwitterWidget twitter_w(&agg, 3);

  agg.NewNewsAvailable();
  std::cout << std::endl;

  twitter_w.RemoveFromSubject();

  agg.NewNewsAvailable();
  return 0;
}
