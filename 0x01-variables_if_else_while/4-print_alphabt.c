#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabets excluding 'q' and 'e'
 *              each followed by a new line, using only the 'putchar' function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar('\n'); /* Print a newline character */

	return (0);
}

