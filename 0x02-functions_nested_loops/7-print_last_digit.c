#include "main.h"

/**
 * print_last_digit - entry point
 * @n: integer to be modified
 * Return: 1
 */

int print_last_digit(int n)
{
	int l, r;

	l = n % 10;
	if (l < 10)
		l = -1;
	r = '0' + 1;
	_putchar(r);
	return (1);
}
