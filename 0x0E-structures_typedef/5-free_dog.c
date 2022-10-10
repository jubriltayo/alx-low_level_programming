#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free memory allocated to dogs
  * @d: dog memory to be freed
  *
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
