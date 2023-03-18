#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char c = 'a';

        while (c <= 'z')
        {
                putchar(c);
                c++;
        }
        putchar('\n');

        return (0);
}
