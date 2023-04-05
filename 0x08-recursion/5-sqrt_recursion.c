#include "main.h"
#include <stdio.h>

/**
 * _sqrt - find the natural square root of a number
 *
 * @n: number to find the square root of
 * @sqrt: possible square root
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);

	if (sqrt * sqrt > n)
		return (-1);

	return (_sqrt(n, sqrt + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number using recursion
 *
 * @n: number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}

