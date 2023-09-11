#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check (represented as an ASCII value).
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    if (c >= 97 && c <= 122) /* Check if the ASCII value falls within the range of lowercase letters */
        return 1; /* It's lowercase */
    else
        return 0; /* It's not lowercase */
}
