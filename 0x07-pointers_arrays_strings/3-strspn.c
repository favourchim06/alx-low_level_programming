#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing acceptable characters.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int is_acceptable;

    while (*s)
    {
        is_acceptable = 0;

        while (*accept)
        {
            if (*s == *accept)
            {
                is_acceptable = 1;
                break;
            }
            accept++;
        }

        if (is_acceptable)
        {
            count++;
            s++;
            accept -= count - 1; /* Reset accept to the beginning */
        }
        else
        {
            break;
        }
    }

    return count;
}
