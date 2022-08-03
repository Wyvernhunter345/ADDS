#ifndef REFEREE
#define REFEREE
#include "Computer.h"
#include "Human.h"

// Decides the outcome of the game
class Referee {
 public:
  char refGame(Human player1, Computer player2);
};

#endif  // REFEREE