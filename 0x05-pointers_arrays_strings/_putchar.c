#include <unistd.h>
#include "main.h"

/**
* _putchar - writes the character C to stdout
* 0c:the character to print
*
* Return: On success 1.
* 	  On error, -1 is Always 0 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
