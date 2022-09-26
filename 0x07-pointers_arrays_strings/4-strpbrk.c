#include "main.h"

/**
 * _strpbrk - search string for any set of bytes
 * @s: source string
 * @accept: accepted characters
 * Return: string since the first found accepted character
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}

			j++;
		}

		i++;
	}

	return ('\0');
}
