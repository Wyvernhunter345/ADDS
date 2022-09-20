#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "MapTriple.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, -2, -3, 4, 5};

    MapAbsolute mapAbs;
    MapSquare mapSq;
    MapTriple mapTr;

    vector<int> v2 = mapTr.map(v);

    for (long unsigned int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << ", ";
    }

    return 0;
}