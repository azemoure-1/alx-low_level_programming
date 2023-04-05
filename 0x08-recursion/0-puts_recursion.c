#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: Pointer to the string to print
 *
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n'); /* Print the new line character */
		return;
	}

	_putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Call the function recursively with the next character */
}

