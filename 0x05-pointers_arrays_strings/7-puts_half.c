#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string to compute the length of
 *
 * Return: The length of the string
 *
 * Description: This function calculates the length of a given string.
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The string to print half of
 *
 * Description: This function prints the second half of the given string,
 * followed by a new line. If the number of characters is odd, it prints
 * the last (length - 1) / 2 characters.
 */
void puts_half(char *str)
{
    int length = _strlen(str);
    int start;

    if (length % 2 == 0)
    {
        start = length / 2;
    }
    else
    {
        start = (length - 1) / 2;
    }

    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }

    _putchar('\n');
}

