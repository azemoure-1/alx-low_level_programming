#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase using putchar twice
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
    putchar('\n');

    return (0);
}
