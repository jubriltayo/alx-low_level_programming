#include "main.h"
#include <stdio.h>

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: string duplicated
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = malloc(i * (sizeof(char)) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';

	return (s);
}
