#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be appended from src to dest.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Concatenate at most n characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* Add null terminator to dest */
	dest[dest_len + i] = '\0';

	/* Return a pointer to the resulting string dest */
	return (dest);
}

