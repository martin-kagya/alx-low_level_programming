#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - functions to initialize the struct
 * @d: variable for the struct
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
