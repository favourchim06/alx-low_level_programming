#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing acceptable bytes.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *accept_ptr = accept;

        while (*accept_ptr)
        {
            if (*s == *accept_ptr)
            {
                return s; /* Found a matching byte */
            }
            accept_ptr++;
        }

        s++;
    }

    return (NULL); /* No matching byte found */
}
