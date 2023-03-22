#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The integer to be processed
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
		ld = -ld;

	_putchar('0' + ld);

	return (ld);
}

