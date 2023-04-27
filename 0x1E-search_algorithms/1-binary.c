#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: array to be searched
 * @low: the first index to print
 * @high: the last index to print
 */
void print_array(int *array, size_t low, size_t high)
{
	char *separator = NULL;

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		if (separator)
			printf("%s%d", separator, array[low]);
		else
			printf("%d", array[low]);
		separator = ", ";
	}
	printf("\n");
}

/**
 * binary_search - function to search for a value in an array
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: return index for success and -1 for otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	print_array(array, low, high);
	return (binary_helper(array, low, high, value));
}

/**
 * binary_helper - helper function to search for a value in an array
 * @array: array to be searched
 * @low: start
 * @high: end
 * @value: value to be searched
 *
 * Return: return index for success and -1 for otherwise
*/
int binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low != high)
	{
		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
		print_array(array, low, high);
	}

	/* edge cases */
	if (array[low] == value)
		return (low);
	return (-1);
}
