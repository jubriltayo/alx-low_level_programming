#include "main.h"

/**
 * print_sign - entry point
 * @n: number to be checked
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if 
 * is less than zero, / if not a digit
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}		
