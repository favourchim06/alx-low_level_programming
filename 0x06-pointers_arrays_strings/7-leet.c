#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
    char leet_map[] = "aAeEoOtTlL";
    char leet_replacements[] = "4433007711";
    int i, j;

    for (i = 0; str[i]; i++)
    {
        for (j = 0; leet_map[j]; j++)
        {
            if (str[i] == leet_map[j])
            {
                str[i] = leet_replacements[j];
                break;
            }
        }
    }

    return str;
}

