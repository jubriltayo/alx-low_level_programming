#include "main.h"

/**
 * * _strcat - appends src to dest string
 * * @dest: string to append to src
 * * @src: string to append to dest
 * * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);
}
