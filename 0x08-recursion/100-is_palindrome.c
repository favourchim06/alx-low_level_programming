#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
    if (*s == '\0') /* Base case: end of string */
    {
        return 0;
    }
    else
    {
        return 1 + _strlen(s + 1); /* Recursively move to next character */
    }
}

/**
 * is_palindrome_helper - Recursive helper function to check if a string is palindrome
 * @s: The input string
 * @start: The starting index
 * @end: The ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end) /* Base case: palindrome if all characters checked */
    {
        return 1;
    }
    else if (s[start] != s[end]) /* Base case: not a palindrome if characters don't match */
    {
        return 0;
    }
    else
    {
        return is_palindrome_helper(s, start + 1, end - 1); /* Recursively check next characters */
    }
}

/**
 * is_palindrome - Determines if a string is palindrome
 * @s: The input string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int length = _strlen(s);

    return is_palindrome_helper(s, 0, length - 1); /* Start checking from both ends */
}
