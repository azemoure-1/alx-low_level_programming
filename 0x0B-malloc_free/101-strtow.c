#include "holberton.h"
#include <stdlib.h>

/**
 * count_words - count the number of words in a string
 * @str: input string
 * Return: number of words in string
 */
int count_words(char *str)
{
        int i, count = 0;

        for (i = 0; str[i] != '\0'; i++)
        {
                if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
                        count++;
        }

        return (count);
}

/**
 * strtow - splits a string into words
 * @str: input string
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
        char **words;
        int i, j, k, len, word_count = 0, start_index = 0;

        if (str == NULL || str[0] == '\0')
                return (NULL);

        word_count = count_words(str);

        if (word_count == 0)
                return (NULL);

        words = malloc((word_count + 1) * sizeof(char *));

        if (words == NULL)
                return (NULL);

        for (i = 0; str[i] != '\0' && word_count > 0; i++)
        {
                if (str[i] != ' ')
                {
                        start_index = i;

                        for (len = 0; str[i] != ' ' && str[i] != '\0'; i++, len++)
                                ;

                        words[k] = malloc((len + 1) * sizeof(char));

                        if (words[k] == NULL)
                        {
                                for (j = k - 1; j >= 0; j--)
                                        free(words[j]);
                                free(words);
                                return (NULL);
                        }

                        for (j = 0; j < len; j++)
                                words[k][j] = str[start_index + j];

                        words[k][j] = '\0';
                        k++;
                        word_count--;
                }
        }

        words[k] = NULL;

        return (words);
}

