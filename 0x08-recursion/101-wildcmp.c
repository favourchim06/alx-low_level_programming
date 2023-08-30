#include "main.h"

/**
 * wildcmp_helper - Recursive helper function to compare two strings with *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0') /* Base case: both strings are empty */
    {
        return 1;
    }
    else if (*s2 == '*') /* Handle * in s2 */
    {
        if (*(s2 + 1) == '*') /* Skip consecutive * in s2 */
        {
            return wildcmp_helper(s1, s2 + 1);
        }
        else if (*s1 == '\0') /* * can replace any string */
        {
            return wildcmp_helper(s1, s2 + 1);
        }
        else
        {
            return wildcmp_helper(s1, s2 + 1) || wildcmp_helper(s1 + 1, s2);
        }
    }
    else if (*s1 == *s2) /* Check characters */
    {
        return wildcmp_helper(s1 + 1, s2 + 1);
    }
    return 0;
}

/**
 * wildcmp - Compares two strings and considers * as a special character
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    return wildcmp_helper(s1, s2);
}
