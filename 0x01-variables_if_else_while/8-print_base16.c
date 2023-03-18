#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char ch;

        for (ch = '0'; ch <= '9'; ch++)
                putchar(ch);
        for (ch = 'a'; ch <= 'f'; ch++)
                putchar(ch);

        putchar('\n');

        return (0);
}
