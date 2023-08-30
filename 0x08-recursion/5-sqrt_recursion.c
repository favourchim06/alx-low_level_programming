#include "main.h"

/**
 * sqrt_helper - Recursive helper function to find the square root
 * @n: The number for which the square root is calculated
 * @guess: The current guess for the square root
 *
 * Return: The square root, or -1 if there is no natural square root
 */
int sqrt_helper(int n, int guess)
{
    if (guess * guess == n) /* Base case: found the square root */
    {
        return guess;
    }
    else if (guess * guess > n) /* Base case: no natural square root */
    {
        return -1;
    }
    else
    {
        return sqrt_helper(n, guess + 1); /* Recursively increment the guess */
    }
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number using recursion
 * @n: The number for which the square root is calculated
 *
 * Return: The square root, or -1 if there is no natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0) /* Base case: negative number */
    {
        return -1;
    }

    return sqrt_helper(n, 0); /* Start with guess = 0 */
}
