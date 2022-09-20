#include "FilterGeneric.h"

// Perform function g() on each element of vector v using recursion
std::vector<int> FilterGeneric::filter(std::vector<int> v)
{
    if (v.size() == 0)
    {
        return v;
    }
    else
    {
        std::vector<int> v2 = filter(std::vector<int>(v.begin() + 1, v.end()));
        if (g(v[0]))
        {
            v2.insert(v2.begin(), v[0]);
        }
        return v2;
    }
}