#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
    int num = 48;

    while (num < 58)
    {
        putchar(num);
        num++;
    }

    num = 97;

    while (num < 103)
    {
        putchar(num);
        num++;
    }

    putchar('\n');

    return (0);
}
