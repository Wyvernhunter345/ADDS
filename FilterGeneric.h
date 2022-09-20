#ifndef FILTER
#define FILTER
#include <vector>

class FilterGeneric
{
private:
    bool g(int);

public:
    std::vector<int> filter(std::vector<int>);
};

#endif // FILTER
