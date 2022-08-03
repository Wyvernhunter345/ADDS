#include "Human.h"

#include <iostream>

char Human::makeMove() {
  char move;
  std::cout << "Enter move: ";
  std::cin >> move;
  return move;
}