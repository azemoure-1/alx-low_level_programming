#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates the value it points to to 98
 *
 * @n: pointer to an integer
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	if (n != NULL)
		*n = 98;
}

