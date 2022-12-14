#include "main.h"

/**
 * * _strncat - appends src to the dest string
 * * @dest: string to append by src
 * * @src: string to append to dest
 * * @n: largest number of bytes to copy
 * * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (i < n)
	{
		*(dest + i) = *(src + j);
	}

	return (dest);
}
