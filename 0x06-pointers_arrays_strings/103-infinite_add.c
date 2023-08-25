#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 * 
 * Return: Pointer to the result or 0 if it cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, carry, sum, i, j;

    for (len1 = 0; n1[len1]; len1++)
        ;
    for (len2 = 0; n2[len2]; len2++)
        ;
    
    if (len1 > size_r || len2 > size_r)
        return (0);

    carry = 0;
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';
        
        carry = sum / 10;
        r[size_r - 1] = (sum % 10) + '0';
        size_r--;
    }

    if (carry)
    {
        if (size_r == 0)
            return (0);
        r[size_r - 1] = carry + '0';
    }
    else
    {
        size_r++;
    }

    return (r + size_r);
}

