#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *s)
{
    char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i, j;

    for (i = 0; s[i]; i++)
    {
        for (j = 0; input[j]; j++)
        {
            if (s[i] == input[j])
            {
                s[i] = output[j];
                break;
            }
        }
    }

    return s;
}

