#include <stdio.h>
#include <stdlib.h> /* Include the standard library for atoi function */

/**
 * is_digit - Check if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
    int sum = 0;
    int i;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        if (is_digit(argv[i]))
        {
            sum += atoi(argv[i]);
        }
        else
        {
            printf("Error\n");
            return (1);
        }
    }

    printf("%d\n", sum);

    return (0);
}
