#include "holberton.h"

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	char c;

	while (n < 10)
	{
		c = n + '0';
		putchar(c);
		n++;
	}
	n = 0;
	while (n < 6)
	{
		c = n + 'a';
		putchar(c);
		n++;
	}
	putchar('\n');

	return (0);
}
