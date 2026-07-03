#include "libmath.h"

namespace libmath
{
    int addition(int x, int y)
    {

        return x + y;
    }
    int subtraction(int x, int y)
    {
        return x - y;
    }
    int multiplication(int x, int y)
    {
        return x * y;
    }
    int power(int x, int y)
    {
        int c = 1;
        for (int i = 0; i < y; i++)
        {
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