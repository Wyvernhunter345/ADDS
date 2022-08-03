#include "Referee.h"
#include <iostream>
#include "Computer.h"
#include "Human.h"

char Referee::refGame(Human player1, Computer player2)
{
    char p1Move = player1.makeMove();
    char p2Move = player2.makeMove();
    if (p1Move == p2Move)
    {
        std::cout << 'T';
        return 'T';
    }
    else if (p1Move == 'R' && p2Move == 'P')
    {
        std::cout << 'L';
        return 'L';
    }
    else if (p1Move == 'P' && p2Move == 'R')
    {
        std::cout << 'W';
        return 'W';
    }
    else if (p1Move == 'S' && p2Move == 'P')
    {
        std::cout << 'W';
        return 'W';
    }
    else if (p1Move == 'P' && p2Move == 'S')
    {
        std::cout << 'L';
        return 'L';
    }
    else if (p1Move == 'S' && p2Move == 'R')
    {
        std::cout << 'L';
        return 'L';
    }
    else if (p1Move == 'R' && p2Move == 'S')
    {
        std::cout << 'W';
        return 'W';
    }

    return 'T';
}
