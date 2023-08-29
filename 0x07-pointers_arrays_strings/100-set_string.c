#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to the target string.
 * @to: Pointer to the string to be assigned.
 */
void set_string(char **s, char *to)
{
    *s = to;
}
