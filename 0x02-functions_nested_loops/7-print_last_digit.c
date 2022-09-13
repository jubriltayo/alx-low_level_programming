#include "main.h"

/**
 * print_last_digit - entry point
 * @n: integer to be modified
 * Return: 1
 */

int print_last_digit(int n)
{
	int lastd, res;

	lastd = n % 10;
	if (lastd < 0)
		lastd = -1;
	res = '0' + 1;
	_putchar(res);
	return (1);
}
