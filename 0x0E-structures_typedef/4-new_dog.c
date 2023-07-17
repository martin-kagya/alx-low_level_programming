#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen, i;
	dog_t *doggy;

	namelen = owenerlen = 0;
	while (name[namelen++])
		;
	while (owner[ownerlen++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(namelen * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < namelen; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(ownerlen * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < ownerlen; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
