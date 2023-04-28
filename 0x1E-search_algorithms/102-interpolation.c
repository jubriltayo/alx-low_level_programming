#include "search_algos.h"

/**
 * interpolation_search - function to search for a value in a sorted array
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index of value for success and -1 for otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (interpol_helper(array, 0, size - 1, value));
}

/**
 * interpol_helper - helper function to search for a value in a sorted array
 * @array: array to be searched
 * @low: lowest index in the array
 * @high: highest index in the array
 * @value: value to be searched
 *
 * Return: index of value for success and -1 for otherwise
 */
int interpol_helper(int *array, size_t low, size_t high, int value)
{
	size_t pos;
	if (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos >= low + high)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			return (interpol_helper(array, low + 1, high, value));
		else
			return (interpol_helper(array, low, high - 1, value));
	}
}
