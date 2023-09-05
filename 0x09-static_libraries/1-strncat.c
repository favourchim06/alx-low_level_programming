#include "main.h"

/* 
 * _strncat - Concatenates n characters from src to dest.
 * @dest: The destination string where src will be appended.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of characters to append.
 *
 * Return: A pointer to the resulting concatenated string (dest).
 */
char *_strncat(char *dest, char *src, int n) {
    int dest_len = 0;
    int i;

    /* Calculate the length of dest. */
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    /* Append up to n characters from src to dest. */
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[dest_len] = src[i];
        dest_len++;
    }

    /* Null-terminate the resulting string. */
    dest[dest_len] = '\0';

    return dest;
}
