#include "RandomComputer.h"
#include <stdlib.h>
#include <time.h>

RandomComputer::RandomComputer()
{
    srand(time(NULL));
}

char RandomComputer::makeMove()
{

    int randMove = rand() % 3;
    if (randMove == 0)
        return 'R';
    else if (randMove == 1)
        return 'P';
    else
        return 'S';
}