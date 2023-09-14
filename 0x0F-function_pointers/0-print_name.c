#include <stdio.h>
#include "function_pointers.h"

/* Function to print a name using a function pointer */
void print_name(char *name, void (*f)(char *)) {
    f(name); /* Call the function pointed to by f */
}
