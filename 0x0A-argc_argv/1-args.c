#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success
 */
int main(int argc, char const **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		continue;
	printf("%d\n", i - 1);

	return (0);
}

