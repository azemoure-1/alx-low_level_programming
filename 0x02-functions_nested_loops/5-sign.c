#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is greater than zero, 0 if n zero, -1 if n less than zero
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}
	else
	{
		sign = -1;
		_putchar('-');
	}

	return (sign);
}

