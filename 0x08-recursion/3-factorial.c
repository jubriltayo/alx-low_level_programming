#include "main.h"

/**
 * factorial - print the factorial of n
 * @n: factorial of integer n
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
