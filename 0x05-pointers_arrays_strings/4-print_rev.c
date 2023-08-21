#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse
 *
 * Description: This function prints the characters of the given string
 * in reverse order, followed by a new line to the standard output (stdout).
 */
void print_rev(char *s)
{
    int length = 0;
    int i;  /* Declare the loop variable here */

    /* Calculate the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }

    /* Print characters in reverse order */
    for (i = length - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    _putchar('\n');
}

