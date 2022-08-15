#include "Crescendo.h"

Crescendo::Crescendo()
{
    moveCount = 0;
}

char Crescendo::makeMove()
{
    if (moveCount == 3)
        moveCount = 0;
    moveCount++;
    if (moveCount == 1)
        return 'P';
    else if (moveCount == 2)
        return 'S';
    else
        return 'R';
}