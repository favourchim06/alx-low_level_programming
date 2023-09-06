#include <stdlib.h>

/**
 * is_space - Checks if a character is a space.
 * @c: The character to check.
 *
 * Return: 1 if it's a space, 0 otherwise.
 */
int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (is_space(*str))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

/**
 * free_words - Frees the memory allocated for an array of strings.
 * @words: The array of strings.
 * @count: The number of strings in the array.
 */
void free_words(char **words, int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        free(words[i]);
    }
    free(words);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of strings containing the words, or NULL if str is NULL
 *         or if memory allocation fails.
 */
char **strtow(char *str)
{
    int word_count, i, in_word;
    char *word_start;
    char **words;

    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    word_count = count_words(str);
    words = (char **)malloc((word_count + 1) * sizeof(char *));

    if (words == NULL)
    {
        return NULL;
    }

    i = 0;
    in_word = 0;
    word_start = NULL;

    while (*str)
    {
        if (is_space(*str))
        {
            if (in_word)
            {
                *str = '\0';
                words[i] = word_start;
                i++;
                in_word = 0;
            }
        }
        else if (!in_word)
        {
            in_word = 1;
            word_start = str;
        }
        str++;
    }

    if (in_word)
    {
        words[i] = word_start;
        i++;
    }

    words[i] = NULL;
    return words;
}
