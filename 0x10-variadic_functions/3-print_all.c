#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @valist: argument list
 *
 * Return: void
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints an integer
 * @valist: argument list
 *
 * Return: void
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - prints a float
 * @valist: argument list
 *
 * Return: void
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints a string
 * @valist: argument list
 *
 * Return: void
 */
void print_string(va_list valist)
{
	char *str = va_arg(valist, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j = 0;
	char *separator = "";

	print_t print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(valist, format);

	while (format && format[i])
	{
		j = 0;

		while (print[j].type != '\0')
		{
			if (format[i] == print[j].type)
			{
				printf("%s", separator);
				print[j].f(valist);
				separator = ", ";
			}

			j++;
		}

		i++;
	}

	printf("\n");
	va_end(valist);
}

