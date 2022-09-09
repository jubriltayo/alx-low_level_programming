#include <stdio.h>

/**
 * main - prints all possible combinations of two  two-digit numbers
 *
 * Return: Always (0) for success
 */
int main(void)
{
	int l, m, n, o;

	for (l = 48; l <= 57; l++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (n = 48; n <= 57; n++)
			{
				for (o = 48; o <= 57; o++)
				{
					if (((n + o) > (l + m) && n >= l) || l < n)
					{
						putchar(l);
						putchar(m);
						putchar(' ');
						putchar(n);
						putchar(o);

					if (l + m + n + o == 227 && l == 57)
						{
						break;
						}
					else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
