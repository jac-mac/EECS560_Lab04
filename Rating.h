#ifndef RATING_H
#define RATING_H

#include <string>

using namespace std;

class Rating
{
  private:
  string title;
  double score;

  public:
  Rating();
  Rating(string t, double s);

  string GetTitle();
  double GetScore();

  void SetTitle(string t);
  void SetScore(double s);
};
#endif
