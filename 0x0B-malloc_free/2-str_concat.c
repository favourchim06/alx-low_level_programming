#include <stdlib.h>

/* Function to concatenate two strings */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    int len1 = 0, len2 = 0, i, j;

    /* Handle NULL strings by treating them as empty strings */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the lengths of s1 and s2 */
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    /* Allocate memory for the concatenated string */
    concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

    if (concatenated == NULL)
        return (NULL);

    /* Copy the characters from s1 to concatenated */
    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    /* Copy the characters from s2 to concatenated */
    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    /* Null-terminate the concatenated string */
    concatenated[i + j] = '\0';

    return (concatenated);
}
