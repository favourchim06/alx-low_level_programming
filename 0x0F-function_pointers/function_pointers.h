#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for print_name function */
void print_name(char *name, void (*f)(char *));

/* Function prototype for print_name_as_is function */
void print_name_as_is(char *name);

/* Function prototype for print_name_uppercase function */
void print_name_uppercase(char *name);

#endif /* FUNCTION_POINTERS_H */

