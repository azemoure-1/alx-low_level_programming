#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	i = printf("%d\n", (int)ui);
	printf("Length: %d\n", i);
	ui = (unsigned int)INT_MIN - 1024;
	i = printf("%d\n", (int)ui);
	printf("Length: %d\n", i);
	return (0);
}

