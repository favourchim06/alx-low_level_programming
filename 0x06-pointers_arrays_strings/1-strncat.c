#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of bytes from src to be concatenated.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *temp_dest = dest;

    /* Move the dest pointer to the end of the destination string */
    while (*temp_dest)
    {
        temp_dest++;
    }

    /* Copy up to n bytes from src to dest */
    while (*src && n > 0)
    {
        *temp_dest = *src;
        temp_dest++;
        src++;
        n--;
    }

    /* Add the terminating null byte */
    *temp_dest = '\0';

    return dest;
}

