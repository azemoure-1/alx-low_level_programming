#include "main.h"

/**
 * main - check the code.
 * is upper - chek
 * @c: input fo alphabet
 * Return: 1 if uppercase. 0 if not
 */
int _isupper(int c)
{
    /* ASCII values for uppercase letters are between 65 and 90 */
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

