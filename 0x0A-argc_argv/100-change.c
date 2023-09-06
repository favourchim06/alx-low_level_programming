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
    int cents, count, i;
    int coins[] = {25, 10, 5, 2, 1};
    int num_coins = sizeof(coins) / sizeof(coins[0]);

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return (0);
    }

    count = 0;

    for (i = 0; i < num_coins; i++)
    {
        while (cents >= coins[i])
        {
            cents -= coins[i];
            count++;
        }
    }

    printf("%d\n", count);

    return (0);
}
