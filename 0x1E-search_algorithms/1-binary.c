#include "search_algos.h"

/**
 * binary_search - function to search for a value in an array
 * @array: array to be searched
 * @size: size of the array
 * @value: searched value
 *
 * Return: return index for success and -1 for otherwise
*/


int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low != high)
	{
		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
	}

	/* edge cases */
	if (array[low] == value)
		return (low);
	return (-1);
}
