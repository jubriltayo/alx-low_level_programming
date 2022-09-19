#include "main.h"

/**
 * _strlen - functions that returns the length of a string
 * @s: character of interest
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
