#include "main.h"

/**
 * _strcpy - Copies a string pointed to by src to the buffer pointed to by dest
 * @dest: The buffer to copy the string to
 * @src: The string to be copied
 *
 * Return: The pointer to dest
 *
 * Description: This function copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest. It then returns
 * a pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    int index = 0;

    /* Copy characters from src to dest */
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }

    dest[index] = '\0';  /* Add the terminating null byte */
    
    return dest;
}

