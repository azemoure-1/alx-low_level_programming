#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	_putchar(num1 * num2 + '0');
	_putchar('\n');

	return (0);
}

