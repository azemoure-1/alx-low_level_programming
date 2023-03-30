#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: If the result can be stored in r - a pointer to the result.
 *         If the result cannot be stored in r - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i = 0, j = 0, k = 0, carry = 0, sum = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	len1--;
	len2--;
	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);
	while (len1 >= 0 || len2 >= 0)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';
		r[k++] = sum % 10 + '0';
		carry = sum / 10;
	}
	if (carry > 0)
		r[k++] = carry + '0';
	r[k] = '\0';
	if (k > size_r)
		return (0);
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		carry = r[i];
		r[i] = r[j];
		r[j] = carry;
	}
	return (r);
}

