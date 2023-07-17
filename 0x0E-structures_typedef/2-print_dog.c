#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function to print details of a dog
 * @d: structure name passed as parameter
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		d->age ? (printf("Age: %f\n", d->age)) : (printf("Age: (nil)\n"));
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil\n"));
	}
}