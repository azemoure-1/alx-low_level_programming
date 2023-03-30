#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98; /* Add this line of code */

	/* ...so that this prints a[2] = 98\n */
	printf("a[2] = %d\n", a[2]);

	return (0);
}

