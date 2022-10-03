#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: char
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}


