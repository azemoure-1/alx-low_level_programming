#include "main.h"
#include <stdio.h>

#include "main.h"

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - Checks if a number is prime recursively
 * @n: The number to check
 * @i: The divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i == n / 2)
		return (1);
	else
		return (check_prime(n, i + 1));
}

