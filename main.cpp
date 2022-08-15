#include <iostream>
#include <string>
#include <vector>

#include "Crescendo.h"

int main()
{
  Crescendo c;
  for (int i = 0; i < 5; i++)
  {
    std::cout << c.makeMove() << std::endl;
  }
}