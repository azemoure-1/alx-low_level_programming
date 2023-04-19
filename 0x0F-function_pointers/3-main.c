#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: Number of arguments passed to the program
 * @argv: Array of string arguments passed to the program
 *
 * Return: 0 on success, 98 on wrong number of arguments, 99 on invalid operator,
 * 100 on division/modulo by zero, or exit status of the selected operation function
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num1, num2);

	printf("%d\n", result);

	return (0);
}

