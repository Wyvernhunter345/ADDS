#include "Truckloads.h"
#include <cmath>

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    if (numCrates <= loadSize)
        return 1;
    else
        return ceil((double)numCrates / loadSize);
}