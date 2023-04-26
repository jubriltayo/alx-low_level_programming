#include "search_algos.h"

/**
 * linear_search - function to search for a value in an array
 * @array: array to be searched
 * @size: size of the array
 * @value: searched value
 *
 * Return: return index for success anf -1 for otherwise
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* check if value at index, i equals searched value */
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
