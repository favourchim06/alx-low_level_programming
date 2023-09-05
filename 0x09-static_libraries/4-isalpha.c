#include "main.h"

/* 
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if @c is an alphabetic character (a letter), 0 otherwise.
 */
int _isalpha(int c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1; /* It's an alphabetic character */
    } else {
        return 0; /* It's not an alphabetic character */
    }
}
