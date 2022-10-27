#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to a string containing the binary number
  *
  * Return: unsigned int with decimal value of binary number; or 0 if error
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		/* check if string contains only 0 and 1 */
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		sum = sum << 1;

		if (b[i] == '1')
			sum = sum + 1;
	}

	return (sum);
}
