#include "main.h"

/**
 * is_space - Checks if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if c is a whitespace character, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in str.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
			count++;
	}

	return (count);
}

/**
 * word_length - Computes the length of a word.
 * @str: The beginning of the word.
 *
 * Return: The length of the word.
 */
int word_length(char *str)
{
	int i;

	for (i = 0; !is_space(str[i]) && str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: An array of strings (words), or NULL if str is NULL or "".
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (is_space(str[j]))
			j++;

		len = word_length(&str[j]);
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[j + k];
		words[i][len] = '\0';

		j += len;
	}

	words[word_count] = NULL;

	return (words);
}

