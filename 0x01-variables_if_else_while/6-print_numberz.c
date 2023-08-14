#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single digit numbers of base 10 starting from 0,
 *              followed by a new line, using only the 'putchar' function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n'); /* Print a newline character */

	return (0);
}

