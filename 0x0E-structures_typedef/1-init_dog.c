#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initialises struct dog.
  * @d: A structure of a dog.
  * @name: Name of the dog.
  * @age: How old the dog is.
  * @owner: The owner of the dog
  *
  * Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
