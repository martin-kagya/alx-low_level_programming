#ifndef DOG
#define DOG
/**
 * struct dog - structure to hold dog details
 * @name: name of dog
 * @age: the age of the dog
 * @owner: owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
