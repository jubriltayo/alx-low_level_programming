#include "search_algos.h"

/**
 * min - function to find the minimum value
 * @x: first value
 * @y: second value
 *
 * Return: the minimum value
 */
size_t min(size_t x, size_t y)
{
	return (x < y ? x : y);
}

/**
 * jump_search - function to find the value in a sorted array
 * @array: array to be searched
 * @size: length of array
 * @value: value to be searched
 *
 * Return: index of the value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = 0;

	if (!array || !size)
		return (-1);

	/* find block that may contain value */
	while (array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step = step + sqrt(size);

		if (step > (size - 1))
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	/* linear search */
	while ((prev <= min(step, size - 1)) && array[prev] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
