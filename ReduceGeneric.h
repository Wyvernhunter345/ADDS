#ifndef REDUCE
#define REDUCE
#include <vector>

class ReduceGeneric
{
private:
    virtual int binaryOperator(int, int);

public:
    int reduce(std::vector<int>);
};

#endif // REDUCE