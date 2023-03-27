#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i])
	{
	if (s[i] == '-')
		sign *= -1;
	else if (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';
		if (result > INT_MAX / 10)
		{
			result = (sign == 1) ? INT_MAX : INT_MIN;
			break;
		}
		result = result * 10 + digit;
		if (digit == 0 && result == 0)
			sign
				if (result < 0)
				{
					result = (sign == 1) ? INT_MAX : INT_MIN;
					break;
				}
	}
	else if (result > 0)
		break;
	i++;
	}
	return (result * sign);
}

