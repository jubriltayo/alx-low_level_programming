#include "main.h"

/**
 * print_last_digit - prints last digit of integer input
 * @n: integer to be modified
 *
 * Return: l
 */

int print_last_digit(int n)
{
	int l, r;

	l = n % 10;
	if (l < 0)
		l = -l;
	r = '0' + l;
	_putchar(r);
	return (l);
}
