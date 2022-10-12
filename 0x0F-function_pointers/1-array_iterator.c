#include "function_pointers.h"

/**
  * array_iterator - prints array content
  * @array: array whose content is to be printed
  * @size: size of array
  * @action: pointer to function
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
