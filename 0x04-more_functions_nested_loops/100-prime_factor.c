#include <stdio.h>
#include <math.h>

/**
 * main - Entry point, finds and prints the largest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long n = 612852475143;
    unsigned long largest = 0;
    unsigned long divisor = 2;

    while (n > 1)
    {
        if (n % divisor == 0)
        {
            if (divisor > largest)
                largest = divisor;
            n /= divisor;
        }
        else
        {
            divisor++;
        }
    }

    printf("%lu\n", largest);

    return (0);
}

