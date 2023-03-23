#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}

