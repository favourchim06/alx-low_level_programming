#include <stdlib.h>

/* Function to duplicate a string and return a pointer to the copy */
char *_strdup(char *str)
{
    char *duplicate;
    int length = 0;
    int i;

    if (str == NULL)
        return (NULL);

    /* Calculate the length of the input string */
    while (str[length] != '\0')
    {
        length++;
    }

    /* Allocate memory for the duplicate string */
    duplicate = (char *)malloc((length + 1) * sizeof(char));

    if (duplicate == NULL)
        return (NULL);

    /* Copy the characters from the input string to the duplicate */
    for (i = 0; i <= length; i++)
    {
        duplicate[i] = str[i];
    }

    return (duplicate);
}
