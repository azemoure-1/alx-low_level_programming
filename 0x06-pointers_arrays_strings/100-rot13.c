#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 *
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr != '\0')
	{
		i = 0;
		j = 0;
		while (rot13[i] != '\0')
		{
			if (*ptr == rot13[i])
			{
				*ptr = ROT13[j];
				break;
			}
			i++;
			j++;
		}
		ptr++;
	}

	return (str);
}

