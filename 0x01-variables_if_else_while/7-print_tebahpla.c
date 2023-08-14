#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabets in reverse order,
 *              followed by a new line, using only the 'putchar' function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n'); /* Print a newline character */

	return (0);
}

