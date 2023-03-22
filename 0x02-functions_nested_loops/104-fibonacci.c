#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, first, second, next;
	unsigned long int f_part1, f_part2, n_part1, n_part2;

	first = 1;
	second = 2;
	printf("%lu, %lu, ", first, second);
	for (i = 0; i < 96; i++)
	{
		next = first + second;
		printf("%lu, ", next);
		first = second;
		second = next;
	}
	f_part1 = 0;
	f_part2 = 1;
	n_part1 = 0;
	n_part2 = 2;
	for (i = 0; i < 76; i++)
	{
		if (n_part1 > 0)
			printf("%lu", f_part1 + f_part2);
		printf("%lu", f_part2 + n_part2);
		f_part1 = f_part2 + n_part2;
		n_part1 = n_part2;
		n_part2 = f_part2 + n_part1;
		f_part2 = f_part1;
		if (i != 75)
			printf(", ");
	}
	printf("\n");
	return (0);
}

