#include "ReduceGeneric.h"

int ReduceGeneric::reduce(std::vector<int> v)
{
    if (v.size() == 0)
    {
        return 0;
    }
    else
    {
        return binaryOperator(v[0], reduce(std::vector<int>(v.begin() + 1, v.end())));
    }
}