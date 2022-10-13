#include "variadic_functions.h"

/**
  * print_numbers - print numbers separated by comma
  * @separator: comma
  * @n: number of argument
  *
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_numbers;
	unsigned int i;

	if (n > 0)
	{
		va_start(my_numbers, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(my_numbers, int));

			if (i == n - 1 && separator != NULL)
				continue;
			else
				printf(", ");
		}
		va_end(my_numbers);
	}
	printf("\n");
}
