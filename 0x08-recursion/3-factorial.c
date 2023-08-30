#include "main.h"

/**
 * factorial - Calculates the factorial of a given number using recursion
 * @n: The number for which the factorial is calculated
 *
 * Return: The factorial of 'n', or -1 if 'n' is negative
 */
int factorial(int n)
{
    if (n < 0) /* Base case: error for negative numbers */
    {
        return -1;
    }
    else if (n == 0) /* Base case: factorial of 0 is 1 */
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); /* Recursively call for (n-1) and multiply with n */
    }
}
