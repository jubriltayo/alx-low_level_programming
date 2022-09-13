#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to be converted
 * Return: absolute value of the input number
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
