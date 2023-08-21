#include "main.h"  /* Include the header file that declares _putchar function */

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to be printed
 *
 * Description: This function prints the characters of the given string
 * followed by a new line to the standard output (stdout).
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str);  /* Use _putchar instead of putchar */
        str++;
    }
    _putchar('\n');  /* Use _putchar instead of putchar */
}

