#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include "BinaryTree.h"
#include "Rating.h"

using namespace std;

class Executive
{
  private:
  string fileName;
  BinaryTree<Rating>* bt;

  public:
  Executive(string file);
  void Run();
  void PrintMenu();
  void WrongInputTypeCheck(int &num);
};
#endif
