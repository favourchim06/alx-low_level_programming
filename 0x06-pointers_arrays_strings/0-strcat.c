#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *temp = dest;
    
    while (*temp)
        temp++;
    
    while (*src)
    {
        *temp = *src;
        temp++;
        src++;
    }
    
    *temp = '\0';
    
    return dest;
}

int concat_main(void) /* Renamed main to concat_main */
{
    int i;
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    for (i = 0; s1[i]; i++)
        _putchar(s1[i]);
    _putchar('\n');

    for (i = 0; s2[i]; i++)
        _putchar(s2[i]);

    ptr = _strcat(s1, s2);

    for (i = 0; s1[i]; i++)
        _putchar(s1[i]);
    for (i = 0; s2[i]; i++)
        _putchar(s2[i]);
    for (i = 0; ptr[i]; i++)
        _putchar(ptr[i]);

    return (0);
}

