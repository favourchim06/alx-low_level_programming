#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer value
 *
 * Description: This function converts the string @s to an integer value. It
 * considers the signs and skips any non-digit characters at the beginning.
 * If there are no valid numbers in the string, the function returns 0.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    /* Handle signs */
    while (s[i] == '+' || s[i] == '-')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    /* Convert string to integer */
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
        }
        else
        {
            break; /* Exit loop if a non-digit character is encountered */
        }
        i++;
    }

    return result * sign;
}

