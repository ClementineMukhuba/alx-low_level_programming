#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Free dog.
  * @d: The struct dog to be free
  *
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

