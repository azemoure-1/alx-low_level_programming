#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}
