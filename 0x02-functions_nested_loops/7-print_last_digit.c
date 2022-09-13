#include "main.h"

/**
 * print_last_digit - prints last digit of integer input
 * @n: integer to be modified
 *
 * Return: 1
 */

int print_last_digit(int n)
{
	int l, r;

	l = n % 10;
	if (l < 0)
		l = -1;
	r = '0' + l;
	_putchar(r);
	return (1);
}
