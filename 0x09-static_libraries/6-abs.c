#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value for.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n) {
    if (n < 0) {
        return -n; /* Return the negation of n if it's negative */
    } else {
        return n; /* Return n if it's non-negative */
    }
}
