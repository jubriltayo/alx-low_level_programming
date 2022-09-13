#include "main.h"

/**
 * _islower - entry point
 *@c: character to test
 *
 * Return: 1 is lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

