#include <iostream>
#include <string>
#include <vector>

#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main() {
  Computer p2;
  Human p1;
  Referee r;
  r.refGame(p1, p2);
  return 0;
}