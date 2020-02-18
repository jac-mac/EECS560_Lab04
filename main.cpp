#include <iostream>
#include "Executive.h"

int main(int argc, char* argv[])
{
  if(argc != 2)
    std::cout << "\n\nInvalid number of parameters. Please only include the program and file name in the command line.\n\n";

  else
  {
    Executive exec(argv[1]);
    exec.Run();
  }
}
