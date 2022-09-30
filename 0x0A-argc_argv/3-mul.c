#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiples of two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success, 1 for otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
	}
	printf("%d\n", mul);

	return (0);
}
