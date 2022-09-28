#include "main.h"

/**
 * _pow_recursion - prints value of x raised to power of y
 * @x: value to multiply
 * @y: number of times to multiply the value
 * Return: vale multiplied by y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

