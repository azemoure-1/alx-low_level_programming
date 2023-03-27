#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The string to print the second half of
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	/* Find the length of the string */
	while (str[length] != '\0')
	{
	length++;
	}

	/* Print the second half of the string */
	for (i = (length + 1) / 2; i < length; i++)
	{
	putchar(str[i]);
	}

	/* Add a new line at the end */
	putchar('\n');
}

