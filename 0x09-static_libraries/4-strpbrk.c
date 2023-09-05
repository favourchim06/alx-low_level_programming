#include "main.h"
#include <stddef.h>

/* 
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the first occurrence of any character in @accept in @s, or NULL if none is found.
 */
char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        char *ch = accept;
        while (*ch != '\0') {
            if (*s == *ch) {
                return s; /* Found a character in accept */
            }
            ch++;
        }
        s++;
    }
    return NULL; /* No match found */
}
