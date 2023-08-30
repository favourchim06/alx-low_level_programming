#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y using recursion
 * @x: The base value
 * @y: The exponent value
 *
 * Return: The result of x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
    if (y < 0) /* Base case: error for negative exponent */
    {
        return -1;
    }
    else if (y == 0) /* Base case: x^0 is 1 */
    {
        return 1;
    }
    else
    {
        return x * _pow_recursion(x, y - 1); /* Recursively multiply x with (x^(y-1)) */
    }
}
