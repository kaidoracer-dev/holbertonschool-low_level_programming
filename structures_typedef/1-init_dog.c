#include <stdio.h>
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
	if (d == NULL)
		return;

	if (name == NULL)
	{	d->name = malloc(strlen(name) + 1);
		if (d->name != NULL)
			strcpy(d->name, name);

	}
	else
		d->name = NULL;

	d->age = age;

	if (owner != NULL)
	{	d->owner = malloc(strlen(owner) + 1);
		if (d->owner != NULL)
			strcpy(d->owner, owner);
	}
	else
		d->owner = NULL;
}
