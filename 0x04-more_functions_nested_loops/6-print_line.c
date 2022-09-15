#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: straight line
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; n++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
