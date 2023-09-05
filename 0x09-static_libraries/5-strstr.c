#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *start = haystack;
        char *sub = needle;

        while (*sub != '\0' && *haystack == *sub) {
            haystack++;
            sub++;
        }

        if (*sub == '\0') {
            return start; /* Substring found */
        }

        haystack = start + 1;
    }

    return NULL; /* Substring not found */
}
