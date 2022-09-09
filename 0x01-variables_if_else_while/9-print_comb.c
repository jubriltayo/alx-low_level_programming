#include <stdio.h>

/**
 * main - print all combinations of single-digit numbers
 *
 * Return: Always (0) for success
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
