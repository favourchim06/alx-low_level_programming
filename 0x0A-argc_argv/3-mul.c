#include <stdio.h>
#include <stdlib.h> /* Include the standard library for atoi function */

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    /* Check if there are exactly two arguments (program name and two numbers) */
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    /* Convert the command-line arguments to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    /* Perform the multiplication */
    result = num1 * num2;

    /* Print the result followed by a new line */
    printf("%d\n", result);

    return (0);
}
