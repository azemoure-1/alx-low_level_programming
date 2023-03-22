#include"main.h"

/**
 * print_alphabet_x10 a a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 */

void print_alphabet_x10(void)
{
	int line, chi;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n';
	}
}
