#include "libmath.h"
#include <climits>

namespace libmath
{
    int addition(int x, int y)
    {
        if(y > 0 && x > INT_MAX - y) return 1;
        if(y < 0 && x < INT_MAX - y) return 1;

        return x + y;
    }
    int subtraction(int x, int y)
    {
        if(y > 0 && x > INT_MAX + y) return 1;
        if(y < 0 && x < INT_MAX + y) return 1;
        return x - y;
    }
    int multiplication(int x, int y)
    {
        if(x != 0 && y > INT_MAX / x) return 1;
        if(x != 0 && y < INT_MAX / x) return 1;
        return x * y;
    }
    int power(int x, int y)
    {
        int c = 1;
        for (int i = 0; i < y; i++)
        {
            if(x != 0 && c > INT_MAX / x) return 1;
            
            c = c * x;
        }
        return c;
    }
    int factorial( int x)
    {
        if(x == 0 || x == 1)
        {
            return 1;
        }
        return x * factorial(x - 1);
    }
    int division(int x, int y, int &c)
    {
        if (y == 0)
        {
            return -1;
        }
        else
        {
            c = x / y;
            return 0;
        }
    }
}