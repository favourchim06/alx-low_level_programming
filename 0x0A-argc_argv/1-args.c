#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
    printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name itself */

    return (0); /* Indicates successful execution */
}
