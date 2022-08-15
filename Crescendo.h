#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Player.h"

class Crescendo : public Player
{
    int moveCount;

public:
    Crescendo();
    char makeMove();
};

#endif // CRESCENDO_H