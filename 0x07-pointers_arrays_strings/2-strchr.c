#include "main.h"

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 * Return: string from whence character was found
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}
