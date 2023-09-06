#include <stdio.h>
#include <stdlib.h> /* Include the standard library for string manipulation */

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int i; /* Declare the loop variable here */

    if (argc > 0) {
        for (i = 0; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    }

    return (0); /* Indicates successful execution */
}
