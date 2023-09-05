#include "main.h"
#include <unistd.h> /* For write */

/* 
 * _puts - Prints a string to stdout followed by a newline.
 * @str: The string to print.
 */
void _puts(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        write(1, &str[i], 1); /* Write each character to stdout */
        i++;
    }
    
    write(1, "\n", 1); /* Print a newline character */
}
