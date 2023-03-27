#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted
 *
 * Return: the integer value of the string
 *         0 if there are no numbers in the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		if (num != 0 && !(s[i] >= '0' && s[i] <= '9'))
			break;
		i++;
	}

	return (num * sign);
}

