#include "main.h"
#include <stdio.h>

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

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	if (s[i] == '0' && s[i+1] != '\0')
	{
		if (s[i+1] == 'x' || s[i+1] == 'X')
		{
			/* hexadecimal */
			i += 2;
			while ((s[i] >= '0' && s[i] <= '9') ||
			       (s[i] >= 'a' && s[i] <= 'f') ||
			       (s[i] >= 'A' && s[i] <= 'F'))
			{
				num = num * 16 + hex_digit_value(s[i]);
				i++;
			}
			return num * sign;
		}
		else
		{
			/* octal */
			i++;
			while (s[i] >= '0' && s[i] <= '7')
			{
				num = num * 8 + (s[i] - '0');
				i++;
			}
			return num * sign;
		}
	}

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

	if (sign == -1 && num == 2147483648)
		return INT_MIN;

	return num * sign;
}

