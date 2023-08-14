#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet followed by a new line
 *              using the 'putchar' function.
 *
 *              Return; Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Loop through the lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter); /* Print each lowercase letter */
	}

	putchar('\n'); /* Print a newline character */

	return (0);
}
