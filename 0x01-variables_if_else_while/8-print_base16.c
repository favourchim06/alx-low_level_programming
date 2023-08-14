#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase,
 *              followed by a new line, using only the 'putchar' function three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int number;

    for (number = 0; number < 16; number++)
    {
        if (number < 10)
        {
            putchar('0' + number); /* Print digits 0-9 */
        }
        else
        {
            putchar('a' + (number - 10)); /* Print letters a-f */
        }
    }

    putchar('\n'); /* Print a newline character */

    return (0);
}

