#ifndef FILTERNEG
#define FILTERNEG
#include "FilterGeneric.h"

class FilterNonPositive : public FilterGeneric
{
public:
    bool g(int);
};

#endif // FILTERNEG