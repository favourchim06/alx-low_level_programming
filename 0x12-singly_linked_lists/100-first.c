#include <stdio.h>

/* Define the print_message function with the constructor attribute */
void print_message(void) __attribute__((constructor));

/**
 * print_message - Prints a specific message.
 */
void print_message(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
