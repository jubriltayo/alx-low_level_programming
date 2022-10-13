#include "variadic_functions.h"

/**
  * sum_them_all - sum of all numbers
  * @n: number of arguments
  *
  * Return: total sum
  */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0, i;

	if (n != 0)
	{
		va_list my_numbers;

		va_start(my_numbers, n);

		for (i = 0; i < n; i++)
			total += va_arg(my_numbers, int);

		va_end(my_numbers);

		return (total);
	}
}
