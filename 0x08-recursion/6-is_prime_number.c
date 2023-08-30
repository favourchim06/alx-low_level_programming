#include "main.h"

/**
 * is_prime_helper - Recursive helper function to check if a number is prime
 * @n: The number to be checked
 * @divisor: The current divisor to check divisibility
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
    if (n <= 1) /* Base case: n is not prime if <= 1 */
    {
        return 0;
    }
    else if (divisor * divisor > n) /* Base case: n is prime if no smaller divisor found */
    {
        return 1;
    }
    else if (n % divisor == 0) /* Base case: n is not prime if divisible by divisor */
    {
        return 0;
    }
    else
    {
        return is_prime_helper(n, divisor + 1); /* Recursively check next divisor */
    }
}

/**
 * is_prime_number - Determines if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
    return is_prime_helper(n, 2); /* Start checking divisibility from 2 */
}
