/* 2-print_alphabet_x10.c */

#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, followed by a newline.
 */
void print_alphabet_x10(void)
{
    char letter = 'a'; /* Initialize letter with 'a' */
    int i, j;

    for (i = 0; i < 10; i++) /* Loop 10 times for 10 sets of alphabet */
    {
        for (j = 0; j < 26; j++) /* Loop through the 26 lowercase alphabet characters */
        {
            _putchar(letter); /* Print the current letter */
            letter++; /* Move to the next letter */
        }
        _putchar('\n'); /* Print a newline after each set of alphabet */
        letter = 'a'; /* Reset the letter to 'a' for the next iteration */
    }
}
