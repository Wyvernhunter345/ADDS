#ifndef FILTER
#define FILTER
#include <vector>

class FilterGeneric
{
private:
    virtual bool g(int) = 0;

public:
    std::vector<int> filter(std::vector<int>);
};

#endif // FILTER
