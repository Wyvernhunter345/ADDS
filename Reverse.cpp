#include "Reverse.h"
#include <cmath>

int Reverse::reverseDigit(int n)
{
    if (n < 10)
        return n;
    else
        return (n % 10) * pow(10, (int)log10(n)) + reverseDigit(n / 10);
}

std::string Reverse::reverseString(std::string s)
{
    if (s.length() == 1)
        return s;
    else
        return s.substr(s.length() - 1, 1) + reverseString(s.substr(0, s.length() - 1));
}
