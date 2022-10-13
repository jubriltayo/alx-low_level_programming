#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  * print_strings - print strings separated by comma
  * @separator: comma
  * @n: number of argument
  *
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strings;
	unsigned int i;
	char *string;

	if (n > 0)
	{
		va_start(my_strings, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(my_strings, char *);

			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (i == n - 1)
				continue;
			else if (separator != NULL)
				printf("%s", separator);
		}
		va_end(my_strings);
	}
	printf("\n");
}
