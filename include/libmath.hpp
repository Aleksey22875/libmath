#include <climits>

namespace libmath
{
int addition(int x, int y, int& c)
{
    long long result = 1LL * x + y;

    if(result > INT_MAX || result < INT_MIN)
    {
        return 2;
    }

    c = (int) result;
    return 0;
}
int subtraction(int x, int y, int& c)
{
    long long result = 1LL * x - y;

    if(result > INT_MAX || result < INT_MIN)
    {
        return 2;
    }

    c = (int) result;
    return 0;
}
int multiplication(int x, int y, int& c)
{
    if (x == 0 || y == 0)
    {
        c = 0;
        return 0;
    }

    if (x > 0)
    {
        if (y > INT_MAX / x || y < INT_MIN / x)
            return 2;
    }
    else
    {
        if (y < INT_MAX / x || y > INT_MIN / x)
            return 2;
    }

    c = x * y;
    return 0;
}
int power(int x, int y, int& r)
{
    int c = 1;
    for (int i = 0; i < y; i++)
    {
        if (x != 0 && c > INT_MAX / x)
            return 2;

        c = c * x;
    }
    r = c;
    return 0;
}
int factorial(int x, int& c)
{
    if (x == 0 || x == 1)
    {
        c = 1;
        return 0;
    }

    int temp;
    int status = factorial(x - 1, temp);

    if (status != 0)
        return 2;

    if (temp > INT_MAX / x)
        return 2;

    c = x * temp;
    return 0;
}
int division(int x, int y, int& c)
{
    if (y == 0)
    {
        return -1;
    if (x == INT_MIN && y == -1)
    {
        return 2;
    }
        c = x / y;
        return 0;
}
} // namespace libmath