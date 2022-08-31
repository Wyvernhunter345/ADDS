#include "MapGeneric.h"
#include <vector>

using namespace std;

MapGeneric::MapGeneric()
{
}

// Perform function f() on each element of vector v using recursion
vector<int> MapGeneric::map(vector<int> v)
{
    if (v.size() == 0)
    {
        return v;
    }
    else
    {
        vector<int> v2 = map(vector<int>(v.begin() + 1, v.end()));
        v2.insert(v2.begin(), f(v[0]));
        return v2;
    }
}