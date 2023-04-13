#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if str contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] < '0' || str[i] > '9')
		return (0);
		i++;
	}

	return (1);
}

/**
 * main - entry point
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
	if (!is_digit(argv[i]))
	{
		printf("Error\n");
		return (1);
	}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

