#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
    char *temp_dest = dest;

    /* Move the dest pointer to the end of the destination string */
    while (*temp_dest)
        temp_dest++;

    /* Copy characters from src to dest */
    while (*src)
    {
        *temp_dest = *src;
        temp_dest++;
        src++;
    }

    /* Add the terminating null byte */
    *temp_dest = '\0';

    return dest;
}

