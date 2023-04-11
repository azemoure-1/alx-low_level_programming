#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array
 * @c: specific char to initialize the array
 *
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}

