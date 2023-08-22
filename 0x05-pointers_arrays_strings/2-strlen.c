#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string to compute the length of
 *
 * Return: The length of the string
 *
 * Description: This function calculates the length of a given string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
