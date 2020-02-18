#include "Rating.h"

Rating::Rating()
{
  title = "";
  score = 0.0;
}

Rating::Rating(string t, double s)
{
  title = t;
  score = s;
}

string Rating::GetTitle()
{
  return title;
}

double Rating::GetScore()
{
  return score;
}

void Rating::SetTitle(string t)
{
  title = t;
}

void Rating::SetScore(double s)
{
  score = s;
}
