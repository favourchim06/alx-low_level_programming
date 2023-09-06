#include <stdlib.h>

/* 
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string that contains the concatenated arguments,
 *         separated by newline characters '\n'.
 *         Returns NULL if ac == 0 or av == NULL, or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
    char *concatenated;
    int i, j, k, total_len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            total_len++;
        total_len++; /* Add one for the newline character */
    }

    concatenated = (char *)malloc(total_len + 1); /* +1 for the null terminator */

    if (concatenated == NULL)
        return (NULL);

    k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            concatenated[k++] = av[i][j];
        concatenated[k++] = '\n';
    }
    concatenated[k] = '\0';

    return (concatenated);
}
