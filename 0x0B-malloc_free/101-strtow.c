#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int words = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str == NULL, str is empty, or memory allocation fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, len = 0, word_count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;

		len = 0;

		while (str[k + len] != ' ' && str[k + len] != '\0')
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);

			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[i][j] = str[k++];

		words[i][j] = '\0';
	}

	words[i] = NULL;

	return (words);
}

