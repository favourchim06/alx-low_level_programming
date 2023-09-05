#include "main.h"

/**
 * _memcpy - Copies memory area from src to dest.
 * @dest: The destination memory address.
 * @src: The source memory address.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory address (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
    unsigned int i;

    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }

    return dest;
}
