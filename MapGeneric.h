#ifndef MAP
#define MAP
#include <vector>

class MapGeneric
{
private:
    virtual int f(int x) = 0;

public:
    MapGeneric();
    std::vector<int> map(std::vector<int> v); // base mapping functiom
};

#endif // MAP