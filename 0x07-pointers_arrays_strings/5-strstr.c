#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be located.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *haystack_ptr = haystack;
        char *needle_ptr = needle;

        while (*needle_ptr && *haystack_ptr == *needle_ptr)
        {
            haystack_ptr++;
            needle_ptr++;
        }

        if (!*needle_ptr) /* Found the substring */
        {
            return haystack;
        }

        haystack++;
    }

    return NULL; /* Substring not found */
}
