#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character
 * @str: The string to print characters from
 *
 * Description: This function prints every other character of the given string,
 * starting with the first character, followed by a new line.
 */
void puts2(char *str)
{
    int index = 0;

    while (str[index] != '\0')
    {
        _putchar(str[index]);
        index += 2;  /* Move to the next even index */
    }

    _putchar('\n');
}

