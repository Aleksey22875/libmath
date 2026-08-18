#include <climits>

#include <stdexcept>

namespace libmath
{
int addition(int x, int y)
{
    long long result = 1LL * x + y;

    if (result > INT_MAX || result < INT_MIN)
    {
        throw
        std::overflow_error("Integer overflow");
    }

    return static_cast<int>(result);
}
int subtraction(int x, int y)
{
    long long result = 1LL * x - y;

    if (result > INT_MAX || result < INT_MIN)
    {
        throw
        std::overflow_error("Integer overflow");
    }

    return static_cast<int>(result);
}
int multiplication(int x, int y)
{
    long long result = 1LL * x * y;

    if (x > 0)
    {
        if (result > INT_MAX || result < INT_MIN)
            throw
        std::overflow_error("Integer overflow");
    }

    return static_cast<int>(result);
}
int power(int x, int y)
{
    int c = 1;
    for (int i = 0; i < y; i++)
    {
        if (x != 0 && c > INT_MAX / x)
            throw
        std::overflow_error("Integer overflow");

        c = c * x;
    }
    return static_cast<int>(c);
}
int factorial(int x)
{
    if (x < 0)
    {
        throw
        std::domain_error("Factorial of negative number");
    }

    if (x == 0 || x == 1)
    {
        return 1;
    }

    int temp = factorial(x - 1);

    if (temp > INT_MAX / x)
        throw
        std::overflow_error("Integer overflow");

    return x * temp;
}
int division(int x, int y)
{
    if (y == 0)
    {
        throw
        std::domain_error("Devision by zero");
    }
    if (x == INT_MIN && y == -1)
    {
        throw
        std::overflow_error("Integer overflow");
    }
    return x / y;
}
} // namespace libmath