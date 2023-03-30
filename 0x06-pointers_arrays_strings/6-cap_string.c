#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: input string
 *
 * Return: Pointer to resulting string
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || s[i - 1] == sep[0] || s[i - 1] == sep[1] || s[i - 1] == sep[2] ||
		    s[i - 1] == sep[3] || s[i - 1] == sep[4] || s[i - 1] == sep[5] ||
		    s[i - 1] == sep[6] || s[i - 1] == sep[7] || s[i - 1] == sep[8] ||
		    s[i - 1] == sep[9])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] += 32;
			}
		}
	}
	return (s);
}

