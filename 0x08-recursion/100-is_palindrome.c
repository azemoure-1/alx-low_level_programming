#include "main.h"
#include <stdio.h>

#include "main.h"
#include <stdio.h>

/**
 * str_len - Returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int str_len(char *s)
{
	int len = 0;

	if (*s != '\0')
		len += str_len(s + 1) + 1;
	return (len);
}

/**
 * is_palindrome_helper - A helper function to check if a string is a palindrome.
 * @s: A pointer to the string.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	if (start >= end)
		return (1);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: A pointer to the string.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int len = str_len(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

