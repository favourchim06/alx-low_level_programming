#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Description: This function reverses the characters of the given string.
 */
void rev_string(char *s)
{
    int length = 0;
    int start = 0;
    int end;
    char temp;

    /* Calculate the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }
    
    end = length - 1;

    /* Swap characters from start to end to reverse the string */
    while (start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        
        start++;
        end--;
    }
}

