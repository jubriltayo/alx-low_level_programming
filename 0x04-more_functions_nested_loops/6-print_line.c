#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: straight line
 */

void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
