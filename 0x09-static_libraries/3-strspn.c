#include "main.h"

/* 
 * _strspn - Calculates the length of the initial segment of @s that consists of characters in @accept.
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 *
 * Return: The length of the initial segment of @s consisting of characters in @accept.
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int i, j;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; accept[j] != '\0'; j++) {
            if (s[i] == accept[j]) {
                count++;
                break; /* Break inner loop if a match is found */
            }
        }
        if (accept[j] == '\0') {
            break; /* Break outer loop if no match is found in accept */
        }
    }

    return count;
}
