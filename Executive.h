#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <iostream>
#include <string>
#include <fstream>
#include "TreeNode.h"

using namespace std;

class Executive
{
  private:
  string fileName;

  public:
  Executive(string file);
  void Run();
};
#endif
