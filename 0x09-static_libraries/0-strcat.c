#include "main.h"

/* 
 * _strcat - Concatenates two strings.
 * @dest: The destination string where src will be appended.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting concatenated string (dest).
 */
char *_strcat(char *dest, char *src) {
    char *start = dest; /* Save the start address of dest. */

    /* Move dest to the end of the string. */
    while (*dest) {
        dest++;
    }

    /* Append the characters from src to dest. */
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }

    /* Null-terminate the resulting string. */
    *dest = '\0';

    return start; /* Return the starting address of the concatenated string. */
}
