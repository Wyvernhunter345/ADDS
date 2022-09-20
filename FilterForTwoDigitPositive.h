#ifndef FILTERTWODIGIT
#define FILTERTWODIGIT
#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric
{
public:
    bool g(int);
};

#endif // FILTERTWODIGIT