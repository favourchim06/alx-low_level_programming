#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all lowercase alphabets, followed by uppercase alphabets, each on a new line, using only the 'putchar' function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase, uppercase;

	/* Print lowercase alphabets */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	/* Print uppercase alphabets */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	putchar('\n'); /* Print a newline character*/

	return (0);
}
