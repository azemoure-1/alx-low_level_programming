#include <stdio.h>

/**
 * main - prints the sum of even Fibonacci numbers below 4,000,000
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, next = 0, sum = 2;

	while (next <= 4000000)
	{
		next = fib1 + fib2;
		if (next % 2 == 0)
			sum += next;
		fib1 = fib2;
		fib2 = next;
	}

	printf("%ld\n", sum);

	return (0);
}

