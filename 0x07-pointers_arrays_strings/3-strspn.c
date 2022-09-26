#include "main.h"

/**
 * _strspn - search string for s set of bytes
 * @s: source string
 * @accept: accepted string
 * Return: number of bytes in the init segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k = 0;

	while (accept[i])
	{
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				k++;
			}

			j++;
		}

		i++;
	}

	return (k);
}

