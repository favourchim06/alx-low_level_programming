#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(int num_bytes) {
    unsigned char *main_ptr = (unsigned char *)print_opcodes;
    int i; // Declare 'i' before the loop

    if (num_bytes <= 0) {
        printf("Error\n");
        exit(2);
    }

    for (i = 0; i < num_bytes; i++) {
        printf("%02x", main_ptr[i]);
        if (i < num_bytes - 1) {
            printf(" ");
        }
    }

    printf("\n");
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 for success, 1 for incorrect argument count, 2 for negative bytes.
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }

    print_opcodes(num_bytes);

    return 0;
}
