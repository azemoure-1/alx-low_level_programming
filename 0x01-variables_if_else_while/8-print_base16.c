#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n = 48;
    int letter = 97;

    while (n < 58)
    {
        putchar(n);
        n++;
    }
    while (letter < 103)
    {
        putchar(letter);
        letter++;
    }
    putchar('\n');
    return (0);
}
