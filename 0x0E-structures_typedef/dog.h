#ifndef _Dog_H
#define _Dog_H

/**
  * struct dog - Information of the Dog
  * @name: Name of the dog.
  * @age: How old the dog is.
  * @owner: The owner of the dog
  *
  * Description: The struct dog with elements.
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
