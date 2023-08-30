#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: Pointer to the string to be printed
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') /* Base case: end of string */
    {
        _putchar('\n'); /* Print a new line at the end */
        return;
    }

    _putchar(*s); /* Print the current character */
    _puts_recursion(s + 1); /* Recursively call for the rest of the string */
}
