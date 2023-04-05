#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: Pointer to the string to print in reverse
 *
 * Return: None
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: End of the string */
	{
		return;
	}

	/* Call the function recursively with the next character */
	_print_rev_recursion(s + 1);
	_putchar(*s); /* Print the current character */
}

