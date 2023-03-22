#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long int first = 1, second = 2, next;

	printf("%lu, %lu", first, second);

	for (count = 2; count < 98; count++)
    	{
	next = first + second;
	printf(", %lu", next);
	first = second;
	second = next;
	}
	printf("\n");
	return (0);
}

