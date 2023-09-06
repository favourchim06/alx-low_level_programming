#include <stdlib.h>

/* Function to create an array of characters and initialize with a specific character */
char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;  /* Declare the loop counter variable outside the loop */

    if (size == 0)
        return (NULL);

    arr = malloc(size * sizeof(char)); /* Allocate memory for the array */

    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)  /* Use the previously declared variable in the loop */
        arr[i] = c; /* Initialize the array with the specified character */

    return (arr);
}
