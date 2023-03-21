#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *_outchar -writes the character c to stdout
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
