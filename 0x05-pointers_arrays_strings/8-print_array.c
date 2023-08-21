#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by a new line
 * @a: The array of integers
 * @n: The number of elements to print
 *
 * Description: This function prints the first `n` elements of the given array
 * of integers. The numbers are separated by commas and spaces, and the output
 * is followed by a new line.
 */
void print_array(int *a, int n)
{
    int i;  /* Declare the loop variable here */

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);

        if (i < n - 1)
        {
            printf(", ");
        }
    }

    printf("\n");
}

