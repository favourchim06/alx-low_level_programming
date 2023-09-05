#include "main.h"

/* 
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1; /* Initialize sign as positive. */

    /* Handle leading whitespace characters. */
    while (*s == ' ' || (*s >= 9 && *s <= 13)) {
        s++;
    }

    /* Handle an optional sign. */
    if (*s == '-' || *s == '+') {
        if (*s == '-') {
            sign = -1; /* Set the sign to negative if a minus sign is found. */
        }
        s++;
    }

    /* Convert the string to an integer. */
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign; /* Return the integer with the correct sign. */
}
