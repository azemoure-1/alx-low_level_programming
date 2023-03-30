#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aeotlAEOTL";
 	char numbers[] = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; letters[j] != '\0'; j++)
	{
	if (str[i] == letters[j])
	{
	str[i] = numbers[j];
	break;
	}
	}
	}
	return (str);
}

