#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for print_name function */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

/* Function prototype for _putchar (if used) */
int _putchar(char c);

#endif /* FUNCTION_POINTERS_H */

