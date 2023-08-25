#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 */
void print_buffer(char *b, int size)
{
    int i, j;

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = i; j < i + 10; j++)
        {
            if (j < size)
                printf("%02x", (unsigned char)b[j]);
            else
                printf("  ");

            if (j % 2)
                printf(" ");
        }

        for (j = i; j < i + 10; j++)
        {
            if (j < size)
            {
                if (b[j] >= 32 && b[j] <= 126)
                    printf("%c", b[j]);
                else
                    printf(".");
            }
        }

        printf("\n");
    }
}

