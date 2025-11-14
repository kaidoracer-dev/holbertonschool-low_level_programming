#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a dog struct
 * @d: pointer to the dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	if (name)
	{	d->name = malloc(strlen(name) + 1);
		if (d->name)
			strcpy(d->name, name);

	}
	else
		d->name = NULL;

	d->age = age;

	if (owner)
	{	d->owner = malloc(strlen(owner) + 1);
		if (d->owner)
			strcpy(d->owner, owner);
	}
	else
		d->owner = NULL;
}
